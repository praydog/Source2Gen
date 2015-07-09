#pragma once

#include "Utility.hpp"
#include "FwUtils.hpp"

#include "Address.hpp"

#include <Windows.h>

template <typename T>
class Interface
{
public:
	typedef void*(*CreateInterfaceFn)(const char*, int*);

	static T* Get(const std::wstring& dllName, const std::string& partialName)
	{
		static T* intyface = nullptr;

		if (intyface)
			return intyface;

		void* dll = nullptr;

		while (true)
		{
			dll = getModuleHandle(dllName.c_str());

			if (dll)
				break;
		}

		std::string createInterface("CreateInterface");
		CreateInterfaceFn factory = reinterpret_cast<CreateInterfaceFn>(getProcAddress(dll, createInterface.c_str()));

		char* fullName = utils::findPatternInModule(dll, std::string("$") + partialName).as<char*>();

		intyface = reinterpret_cast<T*>(factory(fullName, nullptr));
		return intyface;
	}
};