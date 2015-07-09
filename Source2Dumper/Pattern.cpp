#include <algorithm>

#include <windows.h>

#include "Pattern.hpp"

#include "Utility.hpp"

using namespace std;

uint8_t toByte(char digit) {
	if (digit >= '0' && digit <= '9')
		return digit - '0';
	else if (digit >= 'a' && digit <= 'f')
		return digit - 'a' + 10;
	else if (digit >= 'A' && digit <= 'F')
		return digit - 'A' + 10;
	else
		return 0;
}

ByteMatcher::ByteMatcher(uint8_t byte)
	: m_byte(byte)
{}

bool ByteMatcher::match(Address address) {
	if (address.to<uint8_t>() == m_byte)
		return true;
	else
		return false;
}

bool SkipMatcher::match(Address address) {
	return true;
}

Pattern::Pattern()
	: m_pattern()
{}

Pattern::Pattern(const string& pattern)
	: m_pattern()
{
	build(pattern);
}

Pattern::~Pattern() {
	destroy();
}

bool Pattern::buildFromString(const string& str) {
	string pattern;
	char byte[3] = "";

	for (char i : str) {
		sprintf_s(byte, 3, "%02x", i);

		pattern += byte;
	}

	return build(pattern);
}

bool Pattern::build(string pattern) {
	if (m_pattern.size() > 0)
		destroy();

	if (pattern.length() == 0)
		return false;

	if (pattern[0] == '$')
		return buildFromString(pattern.substr(1));

	pattern.erase(remove_if(pattern.begin(), pattern.end(), isspace), pattern.end());

	unsigned int length = pattern.length();

	if (length == 0)
		return false;

	for (unsigned int i = 0; i < length;) {
		char p1 = pattern[i];
		char p2 = pattern[i + 1];
		uint8_t value = 0;

		if (p1 != '?') {
			value |= toByte(p1) << 4;
			value |= toByte(p2);

			m_pattern.push_back(new ByteMatcher(value));
			i += 2;
		}
		else {
			m_pattern.push_back(new SkipMatcher);
			i += 1;
		}
	}

	return true;
}

void Pattern::destroy() {
	for (Matcher* i : m_pattern)
		delete i;

	m_pattern.clear();
}

Address Pattern::find(Address address, unsigned long length) {
	unsigned long patternLength = m_pattern.size();
	uintptr_t start = address.as<uintptr_t>();
	uintptr_t end = address.get(length).as<uintptr_t>() - patternLength;

	static int(__stdcall* isBadReadPtr)(const void* lp, uintptr_t ucb) = (decltype(isBadReadPtr))getProcAddress(getModuleHandle(L"KERNEL32.DLL"), "IsBadReadPtr");

	for (uintptr_t i = start; i <= end; ++i) {
		uintptr_t j = i;
		bool failedToMatch = false;

		if (isBadReadPtr(reinterpret_cast<const void*>(i), patternLength)) {
			i += patternLength - 1; // Good job ecksy.
			continue;
		}

		for (Matcher* k : m_pattern) {
			if (!k->match(Address(j))) {
				failedToMatch = true;
				break;
			}

			++j;
		}

		if (!failedToMatch)
			return Address(i);
	}

	return Address();
}