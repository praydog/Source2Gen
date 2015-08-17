#pragma once

#include <string>

class Source2Gen
{
public:
	Source2Gen(const std::string& genFolder);

	void GenerateHeaders();
	void CreateSchemaBase();

private:
	std::string m_genFolder;
};