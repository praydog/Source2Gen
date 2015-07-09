#pragma once

#include <set>
#include <vector>
#include <map>

#include "Schema.hpp"

class SchemaClassGenerator
{
public:
	SchemaClassGenerator(CSchemaSystemTypeScope* typeScope);
	
	virtual std::string& generate();

public:
	class Single
	{
	public:
		Single(CSchemaClassInfo* classInfo, const std::string& prefix = "");
		Single(CSchemaClassBinding* classBinding, const std::string& prefix = "");

		virtual std::string& generate();
		std::vector<std::string>& getClassTemplates();
		std::set<std::string>& getDependencies();
		std::set<std::string>& getDeclarations();

	private:
		virtual std::string generateBegin();
		virtual std::string generateNestedEnums();
		virtual std::string generatedNestedClasses();
		virtual std::string generateMembers();
		virtual std::string generateEnd();

		virtual std::string generateAdditionalInformation();
		virtual std::string generatePadding(unsigned int offset, unsigned int size);

		virtual std::string generateUnknownType(CSchemaType* schemaType, const std::string& name, int forcedSize = -1);

	private:
		// Can be null.
		CSchemaClassBinding* m_classBinding;
		CSchemaClassInfo* m_classInfo;

		// the names of the classes that use class templates so we can declare them at the top
		std::vector<std::string> m_classTemplates;
		std::set<std::string> m_declarations;
		// type scopes that this depends on.
		std::set<std::string> m_scopesDependsOn;
		std::string m_generatedClass;
		std::string m_prefix;
	};

private:
	virtual std::string generateDependencies();
	virtual std::string generateDeclarations();

private:
	CSchemaSystemTypeScope* m_typeScope;

	std::string m_headerDependencies;
	std::string m_templateDeclarations;
	std::string m_generatedHeader;

	std::vector<CSchemaClassBinding*> m_classes;

	static std::map<std::string, std::string> s_typedefs;
	static std::vector<std::string> s_knownTypes;
};