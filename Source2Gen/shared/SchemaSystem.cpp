#include "SchemaSystem.hpp"

#include "Interface.hpp"

namespace schema
{
	SchemaSystem* SchemaSystem::Get()
	{
		static SchemaSystem* schemaSystem = Interface<SchemaSystem>::Get("schemasystem.dll", "SchemaSystem_001");
		return schemaSystem;
	}

	CSchemaSystemTypeScope* SchemaSystem::GlobalTypeScope()
	{
		return (getVirtual<CSchemaSystemTypeScope* (__thiscall*)(SchemaSystem*)>(this, s_globalTypeScopeIndex))(this);
	}

	CSchemaSystemTypeScope* SchemaSystem::FindTypeScopeForModule(const char* module)
	{
		return (getVirtual<CSchemaSystemTypeScope* (__thiscall*)(SchemaSystem*, const char*)>(this, s_findTypeScopeForModuleIndex))(this, module);
	}


	CSchemaClassInfo* CSchemaSystemTypeScope::FindDeclaredClass(const char* name)
	{
		return (getVirtual<CSchemaClassInfo* (__thiscall*)(CSchemaSystemTypeScope*, const char*)>(this, s_findDeclaredClassIndex))(this, name);
	}

	CSchemaEnumInfo* CSchemaSystemTypeScope::FindDeclaredEnum(const char* name)
	{
		return (getVirtual<CSchemaEnumInfo* (__thiscall*)(CSchemaSystemTypeScope*, const char*)>(this, s_findDeclaredEnumIndex))(this, name);
	}

	CSchemaType* CSchemaSystemTypeScope::FindSchemaTypeByName(const char* name)
	{
		return (getVirtual<CSchemaType* (__thiscall*)(CSchemaSystemTypeScope*, const char*)>(this, 4))(this, name);
	}

	CSchemaType* CSchemaSystemTypeScope::FindType_DeclaredClass(const char* name)
	{
		return (getVirtual<CSchemaType* (__thiscall*)(CSchemaSystemTypeScope*, const char*)>(this, s_findType_DeclaredClassIndex))(this, name);
	}

	CSchemaType* CSchemaSystemTypeScope::FindType_DeclaredEnum(const char* name)
	{
		return (getVirtual<CSchemaType* (__thiscall*)(CSchemaSystemTypeScope*, const char*)>(this, s_findType_DeclaredEnumIndex))(this, name);
	}

	CSchemaClassBinding* CSchemaSystemTypeScope::FindRawClassBinding(const char* name)
	{
		return (getVirtual<CSchemaClassBinding* (__thiscall*)(CSchemaSystemTypeScope*, const char*)>(this, s_findRawClassBindingIndex))(this, name);
	}

	CSchemaEnumBinding* CSchemaSystemTypeScope::FindRawEnumBinding(const char* name)
	{
		return (getVirtual<CSchemaEnumBinding* (__thiscall*)(CSchemaSystemTypeScope*, const char*)>(this, s_findRawEnumBindingIndex))(this, name);
	}
}