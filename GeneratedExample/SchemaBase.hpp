#pragma once
namespace schema { class CSchemaClassBinding; }
class SchemaBase
{
public:
	virtual schema::CSchemaClassBinding* Schema_DynamicBinding() { };
};
