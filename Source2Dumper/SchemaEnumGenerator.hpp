#pragma once

#include <vector>

#include "Schema.hpp"

class SchemaEnumGenerator
{
public:
	class Single
	{
	public:
		Single(CSchemaEnumInfo* enumInfo, const std::string& prefix = "");

		std::string& generate();

	private:
		std::string generateBegin();
		std::string generateTypeStorage();
		std::string generateFields();
		std::string generateEnd();

	private:
		CSchemaEnumInfo* m_enumInfo;
		std::string m_generatedEnum;
		std::string m_prefix;
	};

public:
	SchemaEnumGenerator(CSchemaSystemTypeScope* typeScope);

	std::string& generate();

private:
	std::string generateDeclarations();

private:
	CSchemaSystemTypeScope* m_typeScope;

	std::string m_generatedHeader;

	std::vector<CSchemaEnumInfo*> m_enums;
};