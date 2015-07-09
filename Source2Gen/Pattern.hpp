#pragma once

#include <string>
#include <cstdint>
#include <vector>

#include "Address.hpp"

class Matcher {
public:
	virtual bool match(Address address) = 0;
};

class ByteMatcher : public Matcher {
public:
	ByteMatcher(uint8_t byte);

	virtual bool match(Address address);

private:
	uint8_t m_byte;
};

class SkipMatcher : public Matcher {
public:
	virtual bool match(Address address);
};

class Pattern {
public:
	Pattern();
	Pattern(const std::string& pattern);
	virtual ~Pattern();

	bool buildFromString(const std::string& str);
	bool build(std::string pattern);
	void destroy();

	Address find(Address address, unsigned long length);

private:
	std::vector<Matcher*> m_pattern;
};