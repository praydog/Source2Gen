#include <fstream>

#include "Source2Gen.hpp"

#include "SchemaClassGenerator.hpp"
#include "SchemaEnumGenerator.hpp"

Source2Gen::Source2Gen(const std::string& genFolder) 
	: m_genFolder(genFolder)
{

}

void Source2Gen::GenerateHeaders()
{
	CreateSchemaBase();

	schema::SchemaSystem* schemaSystem = schema::SchemaSystem::Get();
	schema::CSchemaSystemTypeScope* globalScope = schemaSystem->GlobalTypeScope();

	schema::CSchemaSystemTypeScope* clientScope = schemaSystem->FindTypeScopeForModule("client.dll");
	schema::CSchemaSystemTypeScope* serverScope = schemaSystem->FindTypeScopeForModule("server.dll");
	schema::CSchemaSystemTypeScope* worldRendererScope = schemaSystem->FindTypeScopeForModule("worldrenderer.dll");

	// call the constructor for each one, so our classes will be known.
	SchemaClassGenerator globalGen(globalScope);
	SchemaEnumGenerator globalEnumGen(globalScope);

	SchemaClassGenerator clientClassGenerator(clientScope);
	SchemaEnumGenerator clientEnumGenerator(clientScope);

	SchemaClassGenerator serverClassGen(serverScope);
	SchemaEnumGenerator serverEnumGen(serverScope);

	SchemaClassGenerator worldRendererClassGen(worldRendererScope);
	SchemaEnumGenerator worldRendererEnumGen(worldRendererScope);

	globalGen.Generate(m_genFolder);
	globalEnumGen.Generate(m_genFolder);
	clientClassGenerator.Generate(m_genFolder);
	clientEnumGenerator.Generate(m_genFolder);
	serverClassGen.Generate(m_genFolder);
	serverEnumGen.Generate(m_genFolder);
	worldRendererClassGen.Generate(m_genFolder);
	worldRendererEnumGen.Generate(m_genFolder);
}

void Source2Gen::CreateSchemaBase()
{
	// a base class to inherit from for generated classes that use virtuals
	// it is done like this because Visual Studio sometimes aligns the vtable pointer to 8 bytes
	// and this is the only way to fix it (without #pragma pack)
	std::ofstream out(m_genFolder + "/" + "SchemaBase.hpp", std::ofstream::out);

	if (out.is_open())
	{
		out << "#pragma once" << std::endl;
		out << "namespace schema { class CSchemaClassBinding; }" << std::endl;
		out << "class SchemaBase" << std::endl;
		out << "{" << std::endl;
		out << "public:" << std::endl;
		out << "	virtual schema::CSchemaClassBinding* Schema_DynamicBinding() { };" << std::endl;
		out << "};" << std::endl;

		out.close();
	}
}
