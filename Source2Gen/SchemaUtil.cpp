#include <algorithm>

#include <Windows.h>

#include "SchemaUtil.hpp"

void fillInheritanceList(CSchemaClassInfo* classInfo, std::vector<const char*>& inheritance)
{
	if (!classInfo->m_BaseClasses.data || !classInfo->m_BaseClasses.m_size)
		return;

	auto baseClasses = classInfo->m_BaseClasses;

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

void fillClassNameList(std::vector<const char*>& classNames)
{

}

void fillClassBindingList(CSchemaSystemTypeScope* typeScope, std::vector<CSchemaClassBinding*>& classBinding)
{
	SchemaList schemaList = typeScope->GetClassList();

	if (!schemaList)
		return;

	unsigned int blockIndex = 0;
	unsigned int schemaIndex = 0;

	for (auto schemaIterator = schemaList.getIterator<CSchemaClassBinding>(); schemaIndex < 256; schemaIterator = schemaIterator.next(), ++schemaIndex)
	{
		if (!schemaIterator.ptr())
			continue;

		for (auto block = schemaIterator.getFirstBlock(); block && blockIndex < schemaList.getNumSchema(); block = block->nextBlock, ++blockIndex)
		{
			if (!block->classBinding)
				continue;

			CSchemaClassBinding* binding = block->classBinding;

			if (binding && binding->m_classInfo && binding->m_classInfo->m_Name.data)
			{
				classBinding.push_back(binding);
			}
		}
	}
}

void fillClassFieldsList(CSchemaClassInfo* classInfo, std::vector<SchemaClassFieldData_t*>& fields)
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

void fillEnumInfoList(CSchemaSystemTypeScope* typeScope, std::vector<CSchemaEnumInfo*>& enumInfo)
{
	SchemaList schemaList = typeScope->GetEnumList();

	if (!schemaList)
		return;

	unsigned int blockIndex = 0;
	unsigned int schemaIndex = 0;

	for (auto schemaIterator = schemaList.getIterator<CSchemaEnumBinding>(); schemaIndex < 256; schemaIterator = schemaIterator.next(), ++schemaIndex)
	{
		if (!schemaIterator.ptr())
			continue;

		for (auto block = schemaIterator.getFirstBlock(); block && blockIndex < schemaList.getNumSchema(); block = block->nextBlock, ++blockIndex)
		{
			if (!block->classBinding)
				continue;

			CSchemaEnumBinding* binding = block->classBinding;

			if (binding && binding->m_enumInfo && binding->m_enumInfo->m_Name.data)
			{
				enumInfo.push_back((CSchemaEnumInfo*)binding->m_enumInfo);
			}
		}
	}
}

void fillEnumFieldsList(CSchemaEnumInfo* enumInfo, std::vector<SchemaEnumeratorInfoData_t*>& fields)
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
