#include <algorithm>
#include <fstream>

#include "SchemaUtil.hpp"
#include "SchemaList.hpp"

using namespace schema;

void FillInheritanceList(CSchemaClassInfo* classInfo, std::vector<const char*>& inheritance)
{
	if (!classInfo->m_BaseClasses.data || !classInfo->m_BaseClasses.m_size)
		return;

	auto& baseClasses = classInfo->m_BaseClasses;

	std::for_each(baseClasses.data, baseClasses.data + baseClasses.m_size,
	[classInfo, &inheritance](SchemaBaseClassInfoData_t& baseClass) mutable
	{
		if (baseClass.m_pClass && baseClass.m_pClass->m_Name.data)
		{
			inheritance.push_back(baseClass.m_pClass->m_Name.data);
			//MessageBox(0, baseClass.m_pClass->m_Name.data, baseClass.m_pClass->m_Name.data, 0);
			//dumpClassInfo(schemaSystem, baseClass.m_pClass, "  " + prefix);
		}
	});
}

void FillClassFieldsList(CSchemaClassInfo* classInfo, std::vector<SchemaClassFieldData_t*>& fields)
{
	if (!classInfo->m_Fields.data)
		return;

	auto& classMembers = classInfo->m_Fields;

	std::for_each(classMembers.data, classMembers.data + classMembers.m_size,
	[&fields, classInfo](SchemaClassFieldData_t& member) mutable
	{
		if (!member.m_Name.data)
			return;

		fields.push_back(&member);
	});
}

void FillEnumFieldsList(CSchemaEnumInfo* enumInfo, std::vector<SchemaEnumeratorInfoData_t*>& fields)
{
	if (!enumInfo->m_Enumerators.data)
		return;

	auto& enumFields = enumInfo->m_Enumerators;

	std::for_each(enumFields.data, enumFields.data + enumFields.m_size,
	[&fields,enumInfo](SchemaEnumeratorInfoData_t& member) mutable
	{
		if (!member.m_Name.data)
			return;

		fields.push_back(&member);
	});
}

void RecursiveClassSort(std::vector<CSchemaClassBinding*>& v)
{
	std::vector<CSchemaClassBinding*> vCopy = v;

	// Sort by inheritance.
	for (unsigned int i = 0; i < v.size(); ++i)
	{
		std::vector<const char*> inheritance;
		FillInheritanceList((CSchemaClassInfo*)v[i]->m_classInfo, inheritance);

		for (const char* baseClass : inheritance)
		{
			auto inheritedBinding = std::find_if(vCopy.begin(), vCopy.end(),
				[&baseClass](CSchemaClassBinding* binding)
			{
				return !strcmp(binding->m_classInfo->m_Name.data, baseClass);
			});

			auto iter = std::find(vCopy.begin(), vCopy.end(), v[i]);

			if (inheritedBinding != vCopy.end() && inheritedBinding > iter)
			{
				std::iter_swap(inheritedBinding, iter);
				// swiggity swoogle
				i = 0;
			}
		}
	}

	// Sort by types used by members.
	// e.g. CSomeClass m_someMember;
	// will try to bring CSomeClass to be defined before the class CSomeClass is used in.
	for (unsigned int i = 0; i < v.size(); ++i)
	{
		auto& fields = v[i]->m_classInfo->m_Fields;

		for (auto member = fields.data; member != fields.data + fields.m_size; ++member)
		{
			if (!member->m_pType)
				continue;

			// it's okay to have forward declarations for pointers.
			std::string baseName = (member->m_pType->GetTypeCategory() == CSchemaType::Schema_FixedArray) ? member->m_pType->GetBaseName() : member->m_pType->GetName();
			// sometimes a member's type can be a nested class/enum of another class, so we need the class it's taking it from.
			baseName = baseName.substr(0, baseName.find_first_of("::"));

			auto memberType = std::find_if(vCopy.begin(), vCopy.end(),
				[&baseName](CSchemaClassBinding* binding)
			{
				return !strcmp(binding->m_classInfo->m_Name.data, baseName.c_str());
			});

			auto iter = std::find(vCopy.begin(), vCopy.end(), v[i]);

			if (memberType != vCopy.end() && memberType > iter)
			{
				std::iter_swap(memberType, iter);
				// swiggity swoogle
				i = 0;

				RecursiveClassSort(vCopy);
			}
		}
	}

	v = std::move(vCopy);
}
