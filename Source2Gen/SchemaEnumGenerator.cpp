#include <fstream>
#include <algorithm>
#include <string>

#include "SchemaEnumGenerator.hpp"

#include "SchemaUtil.hpp"

using namespace schema;

SchemaEnumGenerator::SchemaEnumGenerator(CSchemaSystemTypeScope* typeScope)
    : m_typeScope(typeScope),
    m_generatedHeader("")
{

}

std::string& SchemaEnumGenerator::Generate(const std::string& genFolder)
{
    m_typeScope->FillEnumInfoList(m_enums);

    bool noEnums = std::all_of(m_enums.begin(), m_enums.end(), [](CSchemaEnumInfo* info) { return strstr(info->m_Name.data, "::") != nullptr; });

    // If all of the enums are part of a class, do not generate this file. It will be useless.
    // The offending enums can be found in the class they are a part of.
    if (noEnums)
        return m_generatedHeader;

    std::ofstream out(genFolder + "/" + std::string(m_typeScope->GetScopeName()) + "_enums" + ".hpp", std::ofstream::out);

    if (!out.is_open())
        return m_generatedHeader;

    m_generatedHeader.clear();
    m_generatedHeader += "#pragma once\n";

    std::sort(m_enums.begin(), m_enums.end(),
        [](CSchemaEnumInfo* a, CSchemaEnumInfo* b)
    {
        return !strstr(a->m_Name.data, "::") && strstr(b->m_Name.data, "::");
    });

    std::sort(m_enums.begin(), m_enums.end(),
        [](CSchemaEnumInfo* a, CSchemaEnumInfo* b)
    {
        return !strstr(a->m_Name.data, "::") && !strstr(b->m_Name.data, "::")
            && std::string(a->m_Name.data) < std::string(b->m_Name.data);
    });

    //m_generatedHeader += generateDeclarations();

    for (CSchemaEnumInfo* i : m_enums)
    {
        if (strstr(i->m_Name.data, "::"))
            continue;

        Single enumGen(i);
        m_generatedHeader += enumGen.Generate();
    }

    out << m_generatedHeader;
    out.close();

    return m_generatedHeader;
}

std::string SchemaEnumGenerator::Single::GenerateBegin()
{
    std::string beginOfEnum;

    if (!m_enumInfo || !m_enumInfo->m_Name.data)
        return beginOfEnum;

    std::string baseName = m_enumInfo->m_Name.data;
    baseName = baseName.substr(baseName.find_last_of(":") + 1);

    // Generates a strongly typed enum.
    beginOfEnum += m_prefix + std::string("enum class ") + baseName;
    beginOfEnum += " : ";
    beginOfEnum += GenerateTypeStorage();
    beginOfEnum += "\n";

    beginOfEnum += m_prefix + "{\n";

    return beginOfEnum;
}

std::string SchemaEnumGenerator::Single::GenerateTypeStorage()
{
    std::string typeStorage = "";

    auto enumType = m_enumInfo->GetTypeScope()->FindSchemaTypeByName(m_enumInfo->m_Name.data);

    if (!enumType)
        return typeStorage;

    // because we can't accurately check if something is actually negative or just going over the signed point of an integer.
    // it will be the same value in the end either way (at a bit level)
    std::string typePrefix = "unsigned ";

    switch (enumType->GetSize())
    {
    case 1:
        typeStorage = typePrefix + "char";
        break;
    case 2:
        typeStorage = typePrefix + "short";
        break;
    case 4:
        typeStorage = typePrefix + "long";
        break;
    case 8:
        typeStorage = typePrefix + "long long";
        break;
    default:
        typeStorage = typePrefix + "INVALID_TYPE";
    }

    return typeStorage;
}

std::string SchemaEnumGenerator::Single::GenerateFields()
{
    std::string fields;

    std::vector <SchemaEnumeratorInfoData_t*> enumFields;
    m_enumInfo->FillEnumFieldsList(enumFields);

    auto enumType = m_enumInfo->GetTypeScope()->FindSchemaTypeByName(m_enumInfo->m_Name.data);

    for (SchemaEnumeratorInfoData_t* i : enumFields)
    {
        if (!i->m_Name.data)
            continue;

        //std::stringstream commentInfo;
        //commentInfo << std::hex << i->m_nSingleInheritanceOffset << " size " << std::dec << i->m_pType->getSize();

        fields += m_prefix;

        std::string baseName = i->m_Name.data;
        baseName = baseName.substr(baseName.find_last_of(":") + 1);

        fields += "\t";
        fields += baseName;
        fields += " = ";

        if (enumType)
        {
            auto size = enumType->GetSize();

            switch (size)
            {
            case 1:
                fields += std::to_string(i->m_nValueChar);
                break;
            case 2:
                fields += std::to_string(i->m_nValueShort);
                break;
            case 4:
                fields += std::to_string(i->m_nValueInt);
                break;
            case 8:
                fields += std::to_string(i->m_nValue);
                break;

            // panic!!!
            default:
                break;
            }
        }
        else
            fields += std::to_string(i->m_nValue);

        fields += ",";
        //fields += "// " + commentInfo.str();
        fields += "\n";
    }

    return fields;
}

std::string SchemaEnumGenerator::Single::GenerateEnd()
{
    return m_prefix + "};\n\n";
}

SchemaEnumGenerator::Single::Single(CSchemaEnumInfo* enumInfo, const std::string& prefix)
    : m_enumInfo(enumInfo),
    m_prefix(prefix)
{

}

std::string& SchemaEnumGenerator::Single::Generate()
{
    m_generatedEnum = GenerateBegin() + GenerateFields() + GenerateEnd();
    return m_generatedEnum;
}
