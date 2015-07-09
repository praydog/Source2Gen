#include "PEHeader.hpp"

#include <iostream>

PEHeader::PEHeader()
	: m_base(nullptr),
	m_setup(false)
{

}

PEHeader::PEHeader(void* base)
	: m_base(base),
	m_setup(false)
{
	int err = setHeaders(base);

	if (err == HEADERS_OK)
		m_setup = true;
}

int PEHeader::setHeaders(void* base)
{
	m_base = base;
	m_dosHeader = (IMAGE_DOS_HEADER*)base;
	m_ntHeaders = nullptr;

	if (m_dosHeader && m_dosHeader->e_magic == IMAGE_DOS_SIGNATURE)
		m_ntHeaders = (IMAGE_NT_HEADERS*)((uintptr_t)base + m_dosHeader->e_lfanew);
	else
	{
		m_setup = false;
		return HEADERS_DOS_INVALID;
	}

	if (!m_ntHeaders || m_ntHeaders->Signature != IMAGE_NT_SIGNATURE)
	{
		m_setup = false;
		return HEADERS_NT_INVALID;
	}

	m_setup = true;
	return HEADERS_OK;
}

// credits: ecksy
void* PEHeader::getAbsolute(uintptr_t rva)
{
	if (m_base == (void*)m_ntHeaders->OptionalHeader.ImageBase)
		return (void*)((uintptr_t)m_base + rva);

	PIMAGE_SECTION_HEADER section = IMAGE_FIRST_SECTION(m_ntHeaders);

	for (unsigned short i = 0; i < m_ntHeaders->FileHeader.NumberOfSections; ++i, ++section)
	{
		unsigned int size = section->Misc.VirtualSize;

		if (size == 0)
			size = section->SizeOfRawData;

		if (rva >= section->VirtualAddress && rva < (section->VirtualAddress + size))
		{
			uintptr_t delta = section->VirtualAddress - section->PointerToRawData;

			return (void*)((uintptr_t)m_base + rva - delta);
		}
	}

	return (void*)((uintptr_t)m_base + rva);
}

IMAGE_SECTION_HEADER* PEHeader::getSection(const std::string& name)
{
	IMAGE_SECTION_HEADER* section = IMAGE_FIRST_SECTION(m_ntHeaders);

	if (!section)
		return nullptr;

	for (unsigned int i = 0; i < m_ntHeaders->FileHeader.NumberOfSections; ++i, ++section)
	{
		if (name == (char*)section->Name)
			return section;
	}

	return nullptr;
}

IMAGE_SECTION_HEADER* PEHeader::getSection(unsigned int index)
{
	IMAGE_SECTION_HEADER* section = IMAGE_FIRST_SECTION(m_ntHeaders);

	if (!section)
		return nullptr;

	return section + index;
}

IMAGE_SECTION_HEADER* PEHeader::getSectionWithin(uintptr_t offset, bool rva)
{
	IMAGE_SECTION_HEADER* section = IMAGE_FIRST_SECTION(m_ntHeaders);

	if (!section)
		return nullptr;

	for (unsigned int i = 0; i < m_ntHeaders->FileHeader.NumberOfSections; ++i, ++section)
	{
		if (rva)
		{
			uintptr_t sectionBase = section->VirtualAddress;
			uintptr_t sectionEnd = sectionBase + section->Misc.VirtualSize;

			if (offset >= sectionBase && offset < sectionEnd)
				return section;
		}
		else
		{
			uintptr_t sectionBase = section->PointerToRawData;
			uintptr_t sectionEnd = sectionBase + section->SizeOfRawData;

			if (offset >= sectionBase && offset < sectionEnd)
				return section;
		}
	}

	return nullptr;
}

PIMAGE_DATA_DIRECTORY PEHeader::getDataDirectory(int directoryEntry)
{
	return &(m_ntHeaders->OptionalHeader.DataDirectory[directoryEntry]);
}

PIMAGE_EXPORT_DIRECTORY PEHeader::getExportDirectory()
{
	PIMAGE_DATA_DIRECTORY exportData = getDataDirectory(IMAGE_DIRECTORY_ENTRY_EXPORT);

	if (!exportData)
		return nullptr;

	return (PIMAGE_EXPORT_DIRECTORY)getAbsolute(exportData->VirtualAddress);
}

PIMAGE_IMPORT_DESCRIPTOR PEHeader::getImportDescriptor()
{
	PIMAGE_DATA_DIRECTORY importData = getDataDirectory(IMAGE_DIRECTORY_ENTRY_IMPORT);

	if (!importData)
		return nullptr;

	return (PIMAGE_IMPORT_DESCRIPTOR)getAbsolute(importData->VirtualAddress);
}

int PEHeader::getSectionIndex(IMAGE_SECTION_HEADER* section)
{
	int sectionIndex = -1;

	for (unsigned int i = 0; i < m_ntHeaders->FileHeader.NumberOfSections; ++i)
	{
		if (section->VirtualAddress == getSection(i)->VirtualAddress)
		{
			sectionIndex = i;
			break;
		}
	}

	return sectionIndex;
}
