/*
This file is part of Ecksy's Framework.

Ecksy's Framework is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

Ecksy's Framework is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with  Ecksy's Framework.  If not, see <http://www.gnu.org/licenses/>.
*/

#include <cstdarg>

#include "FwUtils.hpp"

#include "PEHeader.hpp"

#include "Utility.hpp"

#include "Pattern.hpp"

using namespace std;

namespace utils {
	uintptr_t getModuleSize(Address module) {
		if (!module || module.ptr() == (void*)-1)
			return 0;

		PIMAGE_DOS_HEADER dosHeader = module.as<PIMAGE_DOS_HEADER>();

		if (dosHeader->e_magic != IMAGE_DOS_SIGNATURE)
			return 0;

		IMAGE_NT_HEADERS* ntHeader = (IMAGE_NT_HEADERS*)((uintptr_t)dosHeader + (uintptr_t)dosHeader->e_lfanew);

		if (ntHeader->Signature != IMAGE_NT_SIGNATURE)
			return 0;

		return ntHeader->OptionalHeader.SizeOfImage;
	}

	Address findPatternInModule(Address module, const std::string& mask) {
		if (!module || module.ptr() == (void*)-1)
			return Address();

		PIMAGE_DOS_HEADER dosHeader = module.as<PIMAGE_DOS_HEADER>();

		if (dosHeader->e_magic != IMAGE_DOS_SIGNATURE)
			return Address();

		IMAGE_NT_HEADERS* ntHeader = (IMAGE_NT_HEADERS*)((uintptr_t)dosHeader + (uintptr_t)dosHeader->e_lfanew);

		if (ntHeader->Signature != IMAGE_NT_SIGNATURE)
			return Address();

		Address address((uintptr_t)module);

		return findPatternInMemory(address, ntHeader->OptionalHeader.SizeOfImage, mask);
	}

	// address ref
	Address findAddressRef(Address module, const Address& ref, bool relative /*= false*/) {
		if (!relative) {
			char address[9];

			sprintf_s(&address[0], 2, "%02X", (ref.as<uintptr_t>() & 0xFF));
			sprintf_s(&address[2], 2, "%02X", (ref.as<uintptr_t>() & (0xFF << 8)) >> 8);
			sprintf_s(&address[4], 2, "%02X", (ref.as<uintptr_t>() & (0xFF << 16)) >> 16);
			sprintf_s(&address[6], 2, "%02X", (ref.as<uintptr_t>() & (0xFF << 24)) >> 24);

			address[8] = '\0';

			return findPatternInModule(module, string(address));
		}
		else
		{
			uintptr_t moduleSize = getModuleSize(module);

			for (uintptr_t i = (uintptr_t)module; i < (uintptr_t)module + moduleSize; ++i)
			{
				if (calculateAbsoluteAddress(i).as<void*>() == ref.as<void*>())
					return i;
			}
		}

		return Address();
	}

	// address ref in memory
	Address findAddressRefInMemory(Address addressInMemory, unsigned long size, const Address& ref) {
		char address[9];


		sprintf_s(&address[0], 2, "%02X", (ref.as<uintptr_t>() & 0xFF));
		sprintf_s(&address[2], 2, "%02X", (ref.as<uintptr_t>() & (0xFF << 8)) >> 8);
		sprintf_s(&address[4], 2, "%02X", (ref.as<uintptr_t>() & (0xFF << 16)) >> 16);
		sprintf_s(&address[6], 2, "%02X", (ref.as<uintptr_t>() & (0xFF << 24)) >> 24);

		address[8] = '\0';

		return findPatternInMemory(addressInMemory, size, string(address));
	}

	Address findPatternInMemory(Address address, unsigned long size, const string& mask) {
		Pattern pattern(mask);

		return pattern.find(address, size);
	}

	Address reverseFindPatternInMemory(Address address, unsigned long size, const std::string& mask)
	{
		Address findAddress = nullptr;

		unsigned int bytes = 1;

		for (unsigned int i = 0; i < mask.size(); ++i)
		{
			if (mask[i] == ' ')
				++bytes;
		}

		for (unsigned int i = 0; i < size; ++i)
		{
			findAddress = utils::findPatternInMemory(address.as<uintptr_t>() - i, bytes + 1, mask);

			if (findAddress)
				break;
		}

		return findAddress;
	}

	Address calculateJmpAddress(Address address) {
		char* data = address.as<char*>(); //(PBYTE)address;
		unsigned int jmpAddress = 0;

		memcpy(&jmpAddress, ++data, sizeof(unsigned int));

		return Address(jmpAddress + address.as<uintptr_t>() + 5);
	}

	// I've only had to use this in x64 applications.
	Address calculateAbsoluteAddress(Address address)
	{
		long offset = address.to<long>();
		Address rip = address + 4;

		// converting the offset to uintptr_t is bad because it wont be negative
		return Address(rip.as<uintptr_t>() + offset);
	}

	Address findStringRef(Address module, const std::string& ref) {
		Address result = findPatternInModule(module, string("$") + ref);

		if (!result)
			return Address();

#ifndef _M_X64
		return findAddressRef(module, result);
#else
		for (uintptr_t i = (uintptr_t)module; i < (uintptr_t)module + getModuleSize(module); ++i)
		{
			if (calculateAbsoluteAddress(i).as<void*>() == result.as<void*>())
				return i;
		}

		return Address();
#endif
	}

	Address findStringRefInMemory(Address module, Address address, unsigned long size, const std::string& ref)
	{
		Address result = findPatternInModule(module, string("$") + ref);

		if (!result)
			return Address();

		return findAddressRefInMemory(address, size, result);
	}

	Address findExactStringRef(Address module, const std::string& ref) {
		Address result = findPatternInModule(module, string("$") + ref);

		if (!result)
			return Address();

		if (!module || module.ptr() == (void*)-1)
			return Address();

		PIMAGE_DOS_HEADER dosHeader = module.as<PIMAGE_DOS_HEADER>();

		if (dosHeader->e_magic != IMAGE_DOS_SIGNATURE)
			return Address();

		IMAGE_NT_HEADERS* ntHeader = (IMAGE_NT_HEADERS*)((uintptr_t)dosHeader + (unsigned int)dosHeader->e_lfanew);

		if (ntHeader->Signature != IMAGE_NT_SIGNATURE)
			return Address();

		unsigned int modSize = ntHeader->OptionalHeader.SizeOfImage;

		if ((result && Address(result - 1).to<char>() != '\0' && strcmp(result.as<char*>(), ref.c_str())) || strcmp(result.as<char*>(), ref.c_str())) {
			for (uintptr_t i = result; i < result + modSize; ++i) {
				result = findPatternInMemory(i, (unsigned long)(modSize - (i - (uintptr_t)module)), string("$") + ref);

				if (result && Address(result - 1).to<char>() == '\0' && strcmp(result.as<char*>(), ref.c_str()) == 0)
					break;

				if (result)
					i = result;
			}
		}

		if (result)
		{
#ifndef _M_X64
			return findAddressRef(module, result);
#else
			for (uintptr_t i = (uintptr_t)module; i < (uintptr_t)module + modSize; ++i)
			{
				if (calculateAbsoluteAddress(i).as<void*>() == result.as<void*>())
					return i;
			}
#endif
		}

		return Address();
	}


	Address findExactStringRefInMemory(Address module, Address address, unsigned long size, const std::string& ref)
	{
		Address result = findPatternInModule(module, string("$") + ref);

		if (!result)
			return Address();

		if (!module || module.ptr() == (void*)-1)
			return Address();

		PIMAGE_DOS_HEADER dosHeader = module.as<PIMAGE_DOS_HEADER>();

		if (dosHeader->e_magic != IMAGE_DOS_SIGNATURE)
			return Address();

		IMAGE_NT_HEADERS* ntHeader = (IMAGE_NT_HEADERS*)((uintptr_t)dosHeader + (unsigned int)dosHeader->e_lfanew);

		if (ntHeader->Signature != IMAGE_NT_SIGNATURE)
			return Address();

		unsigned int modSize = ntHeader->OptionalHeader.SizeOfImage;

		if ((result && Address(result - 1).to<char>() != '\0' && strcmp(result.as<char*>(), ref.c_str())) || strcmp(result.as<char*>(), ref.c_str())) {
			for (uintptr_t i = result; i < result + modSize; ++i) {
				result = findPatternInMemory(i, (unsigned long)(modSize - (i - (uintptr_t)module)), string("$") + ref);

				if (result && Address(result - 1).to<char>() == '\0' && strcmp(result.as<char*>(), ref.c_str()) == 0)
					break;

				if (result)
					i = result;
			}
		}

		if (result)
			return findAddressRefInMemory(address, size, result);

		return Address();
	}
}