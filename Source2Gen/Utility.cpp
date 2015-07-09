#include <stdio.h>
#include <stdarg.h>

#include <string>
#include <fstream>

#include <algorithm>

#include <atomic>

#include <windows.h>
#include <winternl.h>

#include "FwUtils.hpp"

#include "Utility.hpp"

#include "Address.hpp"

#include "PEHeader.hpp"

using namespace std;

std::wstring toWideString(const std::string& s)
{
	return std::wstring(s.begin(), s.end());
}

// just things
void* getModuleHandle(const wchar_t* moduleName)
{
	std::wstring lowerModule = moduleName;
	std::transform(lowerModule.begin(), lowerModule.end(), lowerModule.begin(), ::towlower);

	PEB* peb = nullptr;

	__asm
	{
		mov eax, fs:[0x30];
		mov peb, eax;
	}

	if (!peb)
		return 0;

	LIST_ENTRY moduleList = peb->Ldr->InMemoryOrderModuleList;

	for (LDR_DATA_TABLE_ENTRY* entry = CONTAINING_RECORD(moduleList.Flink, LDR_DATA_TABLE_ENTRY, InMemoryOrderLinks);
		entry && entry->InMemoryOrderLinks.Flink != moduleList.Flink;
		entry = CONTAINING_RECORD(entry->InMemoryOrderLinks.Flink, LDR_DATA_TABLE_ENTRY, InMemoryOrderLinks))
	{
		wchar_t* dllName = ((UNICODE_STRING*)&entry->Reserved4[0])->Buffer;

		if (!dllName)
			continue;

		std::wstring dllNameW = dllName;
		std::transform(dllNameW.begin(), dllNameW.end(), dllNameW.begin(), ::towlower);

		//if (wcscmp(moduleName, dllName) == 0)
		if (lowerModule == dllNameW)
			return entry->DllBase;
	}

	return nullptr;
}

void* getProcAddress(const wchar_t* moduleName, const char* function, bool wait)
{
	void* moduleBase = nullptr;

	do
	{
		moduleBase = (void*)getModuleHandle(moduleName);
	} while (wait && !moduleBase);

	if (!moduleBase)
		return nullptr;

	return getProcAddress(moduleBase, function);
}

void* getProcAddress(void* module, const char* function)
{
	if (!module)
		return nullptr;

	PEHeader header(module);

	if (!header.isSetUp())
	{
		return nullptr;
	}

	IMAGE_DATA_DIRECTORY* exportData = header.getDataDirectory(IMAGE_DIRECTORY_ENTRY_EXPORT);

	if (!exportData || exportData->Size == 0)
	{
		return nullptr;
	}

	IMAGE_EXPORT_DIRECTORY* exportDirectory = (IMAGE_EXPORT_DIRECTORY*)header.getAbsolute(exportData->VirtualAddress);

	if (!exportDirectory)
	{
		return nullptr;
	}

	// array of RVAs.
	uintptr_t* exportFunctionOffsets = (uintptr_t*)((uintptr_t)module + exportDirectory->AddressOfFunctions);
	// array of RVAs.
	uintptr_t* exportNameOffsets = (uintptr_t*)((uintptr_t)module + exportDirectory->AddressOfNames);
	// array of actual ordinals, not RVAs.
	short* ordinalOffsets = (short*)((uintptr_t)module + exportDirectory->AddressOfNameOrdinals);

	char* functionName = nullptr;
	uintptr_t functionAddress = 0;

	for (unsigned int i = 0; i < exportDirectory->NumberOfNames; ++i)
	{
		functionName = (char*)((uintptr_t)module + exportNameOffsets[i]);
		functionAddress = (uintptr_t)module + exportFunctionOffsets[ordinalOffsets[i]];

		if (strcmp(functionName, function) == 0)
			break;
	}

	return (void*)functionAddress;
}
