#pragma once

#include <string>

//#include <Windows.h>

#include "Address.hpp"

namespace utils 
{
	uintptr_t getModuleSize(Address module);
	uintptr_t getModuleSize(const char* module);

	Address findPatternInModule(Address module, const std::string& mask);
	Address findAddressRef(Address module, const Address& ref, bool relative = false);
	Address findAddressRefInMemory(Address address, unsigned long size, const Address& ref);
	Address findPatternInMemory(Address address, unsigned long size, const std::string& mask);
	Address reverseFindPatternInMemory(Address address, unsigned long size, const std::string& mask);
	Address calculateJmpAddress(Address address);
	Address calculateAbsoluteAddress(Address address);
	Address findStringRef(Address module, const std::string& ref);
	Address findStringRefInMemory(Address module, Address address, unsigned long size, const std::string& ref);
	Address findExactStringRef(Address module, const std::string& ref);
	Address findExactStringRefInMemory(Address module, Address address, unsigned long size, const std::string& ref);
}