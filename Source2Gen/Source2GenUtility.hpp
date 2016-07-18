#pragma once

// Functions in this file are ones that don't necessarily need to be included in the project that uses the generated SDK.

// Calls tier0.dll's export "ConMsg" to output a message to the console. Uses printf style parameters.
extern void(__cdecl* ConMsg)(const char* format, ...);