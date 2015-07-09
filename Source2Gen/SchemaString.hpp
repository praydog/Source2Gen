#pragma once

#include <string>

struct SchemaString_t
{
	operator std::string()
	{
		return data;
	}

	const char* data;
	unsigned int size;
};