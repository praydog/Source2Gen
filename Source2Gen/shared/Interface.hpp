#pragma once

#include <string>

#include <Windows.h>

template <typename T>
class Interface {
public:
    typedef void*(*CreateInterfaceFn)(const char*, int*);

    static T* Get(const std::string& dllName, const std::string& fullName) {
        static T* interfacePtr = nullptr;

        if (interfacePtr) {
            return interfacePtr;
        }

        HMODULE dll = nullptr;

        do {
            dll = GetModuleHandle(dllName.c_str());
        } while (!dll);

        auto factory = (CreateInterfaceFn)GetProcAddress(dll, "CreateInterface");

        interfacePtr = (T*)(factory(fullName.c_str(), nullptr));
        return interfacePtr;
    }
};