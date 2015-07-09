#pragma once

#include "Schema.hpp"

void fillInheritanceList(CSchemaClassInfo* classInfo, std::vector<const char*>& inheritance);
void fillClassNameList(std::vector<const char*>& classNames);
void fillClassBindingList(CSchemaSystemTypeScope* typeScope, std::vector<CSchemaClassBinding*>& classBinding);
void fillClassFieldsList(CSchemaClassInfo* classInfo, std::vector<SchemaClassFieldData_t*>& fields);

void fillEnumInfoList(CSchemaSystemTypeScope* typeScope, std::vector<CSchemaEnumInfo*>& enumInfo);
void fillEnumFieldsList(CSchemaEnumInfo* enumInfo, std::vector<SchemaEnumeratorInfoData_t*>& fields);