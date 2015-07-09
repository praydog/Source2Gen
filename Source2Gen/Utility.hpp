#pragma once

#include <string>

void* getModuleHandle(const wchar_t* moduleName);
void* getProcAddress(const wchar_t* moduleName, const char* function, bool wait = true);
void* getProcAddress(void* module, const char* function);

std::wstring toWideString(const std::string& s);

template
<typename T>
T getVirtual(void* object, unsigned int index)
{
	return (*(T**)object)[index];
}