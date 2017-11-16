#pragma once

#include <vector>

#include "Schema.hpp"
#include "SchemaSystem.hpp"

class SchemaEnumGenerator {
public:
    class Single {
    public:
        Single(schema::CSchemaEnumInfo* enumInfo, const std::string& prefix = "");

        virtual std::string& Generate();

    private:
        virtual std::string GenerateBegin();
        virtual std::string GenerateTypeStorage();
        virtual std::string GenerateFields();
        virtual std::string GenerateEnd();

    private:
        schema::CSchemaEnumInfo* m_enumInfo;
        std::string m_generatedEnum;
        std::string m_prefix;
    };

public:
    SchemaEnumGenerator(schema::CSchemaSystemTypeScope* typeScope);

    virtual std::string& Generate(const std::string& genFolder);

private:
    schema::CSchemaSystemTypeScope* m_typeScope;

    std::string m_generatedHeader;

    std::vector<schema::CSchemaEnumInfo*> m_enums;
};