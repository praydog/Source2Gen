#pragma once

#include <string>

#include <Windows.h>

template <typename T>
class Interface
{
public:
	typedef void*(*CreateInterfaceFn)(const char*, int*);

	static T* Get(const std::string& dllName, const std::string& fullName)
	{
		static T* intyface = nullptr;

		if (intyface)
			return intyface;

		void* dll = nullptr;

		while (true)
		{
			dll = (void*)GetModuleHandle(dllName.c_str());

			if (dll)
				break;
		}

		std::string createInterface("CreateInterface");
		CreateInterfaceFn factory = (CreateInterfaceFn)GetProcAddress((HMODULE)dll, createInterface.c_str());

		intyface = reinterpret_cast<T*>(factory(fullName.c_str(), nullptr));
		return intyface;
	}
};