#include <Windows.h>

#include "Source2GenUtility.hpp"

void(__cdecl* ConMsg)(const char* format, ...) = []() {
    HMODULE tier0 = 0;

    do {
        tier0 = GetModuleHandle("tier0.dll");
    } while (!tier0);

    decltype(ConMsg) conMsg = nullptr;

    do {
#ifndef _M_X64
        conMsg = (void(__cdecl*)(const char* format, ...))GetProcAddress(tier0, "?ConMsg@@YAXPBDZZ");
#else
        conMsg = (void(__cdecl*)(const char* format, ...))GetProcAddress(tier0, "?ConMsg@@YAXPEBDZZ");
#endif
    } while (!conMsg);

    return conMsg;
}();
