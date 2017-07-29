#pragma once

#include <set>
#include <vector>
#include <unordered_map>

#include "Schema.hpp"
#include "SchemaSystem.hpp"

class SchemaClassGenerator
{
public:
    SchemaClassGenerator(schema::CSchemaSystemTypeScope* typeScope);
    ~SchemaClassGenerator();

    virtual std::string& Generate(const std::string& genFolder);

public:
    class Single
    {
    public:
        Single(schema::CSchemaClassInfo* classInfo, const std::string& prefix = "");
        Single(schema::CSchemaClassBinding* classBinding, const std::string& prefix = "");

        virtual std::string& Generate();

        std::set<std::string>& GetClassTemplates();
        std::set<std::string>& GetDependencies();
        std::set<std::string>& GetDeclarations();

    private:
        virtual std::string GenerateBegin();
        virtual std::string GenerateNestedEnums();
        virtual std::string GeneratedNestedClasses();
        virtual std::string GenerateMembers();
        virtual std::string GenerateStaticMembers();
        virtual std::string GenerateEnd();

        virtual std::string GenerateAdditionalInformation();
        virtual std::string GeneratePadding(unsigned int offset, unsigned int size);

        virtual std::string GenerateUnknownType(schema::CSchemaType* schemaType, const std::string& name, bool staticMember = false, int forcedSize = -1);
        virtual std::string GenerateLegalType(schema::CSchemaType* schemaType, const std::string& name, bool staticMember = false, int forcedSize = -1);

    private:
        // Can be null.
        schema::CSchemaClassBinding* m_classBinding;
        schema::CSchemaClassInfo* m_classInfo;

        // the names of the classes that use class templates so we can declare them at the top
        std::set<std::string> m_classTemplates;
        std::set<std::string> m_declarations;
        // type scopes that this depends on.
        std::set<std::string> m_scopesDependsOn;
        std::string m_generatedClass;
        std::string m_prefix;
    };

private:
    virtual std::string GenerateDeclarations();

private:
    schema::CSchemaSystemTypeScope* m_typeScope;

    std::string m_headerDependencies;
    std::string m_templateDeclarations;
    std::string m_generatedHeader;

    std::vector<schema::CSchemaClassBinding*> m_classes;

    static std::unordered_map<std::string, std::string> s_typedefs;
    static std::vector<std::string> s_knownTypes;
};