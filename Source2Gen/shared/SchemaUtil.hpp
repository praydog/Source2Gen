#pragma once

#include "Schema.hpp"
#include "SchemaSystem.hpp"

void FillInheritanceList(schema::CSchemaClassInfo* classInfo, std::vector<const char*>& inheritance);
void FillClassFieldsList(schema::CSchemaClassInfo* classInfo, std::vector<schema::SchemaClassFieldData_t*>& fields);

void FillEnumFieldsList(schema::CSchemaEnumInfo* enumInfo, std::vector<schema::SchemaEnumeratorInfoData_t*>& fields);

void RecursiveClassSort(std::vector<schema::CSchemaClassBinding*>& v);