#include <fstream>
#include <algorithm>
#include <sstream>
#include <set>
#include <memory>
#include <mutex>

#include "SchemaClassGenerator.hpp"
#include "SchemaEnumGenerator.hpp"

#include "SchemaUtil.hpp"
#include "Source2GenUtility.hpp"

using namespace schema;

std::unordered_map<std::string, std::string> SchemaClassGenerator::s_typedefs =
{
    { "float32", "float" },
    { "float64", "double" },

    { "int8", "int8_t" },
    { "int16", "int16_t" },
    { "int32", "int32_t" },
    { "int64", "int64_t" },

    { "uint8", "uint8_t" },
    { "uint16", "uint16_t" },
    { "uint32", "uint32_t" },
    { "uint64", "uint64_t" }
};

std::vector<std::string> SchemaClassGenerator::s_knownTypes =
{
    "bool",
    "bool*",
    "float",
    "float*",
    "void*",
    "char",
    "char*"
};

SchemaClassGenerator::SchemaClassGenerator(CSchemaSystemTypeScope* typeScope)
    : m_typeScope(typeScope),
    m_generatedHeader("")
{
    std::vector<CSchemaEnumInfo*> enums;
    m_typeScope->FillClassBindingList(m_classes);
    m_typeScope->FillEnumInfoList(enums);

    // fill our known types list for classes.
    for (CSchemaClassBinding* i : m_classes)
        s_knownTypes.push_back(i->m_classInfo->m_Name.data);

    // fill our known types list for enumerators.
    for (CSchemaEnumInfo* i : enums)
        s_knownTypes.push_back(i->m_Name.data);
}

SchemaClassGenerator::~SchemaClassGenerator()
{
    // weird voodoo might happen if ConMsg is called at the same time or something.
    static std::mutex msgMutex;
    std::lock_guard<std::mutex> msgLock(msgMutex);

    ConMsg("SchemaClassGenerator: Finished generating classes for %s\n", m_typeScope->GetScopeName());
}

std::string& SchemaClassGenerator::Generate(const std::string& genFolder)
{
    std::ofstream out(genFolder + "/" + std::string(m_typeScope->GetScopeName()) + "_classes" + ".hpp", std::ofstream::out);

    if (!out.is_open())
        return m_generatedHeader;

    m_generatedHeader.clear();
    ClassSort(m_classes);

    m_generatedHeader += GenerateDeclarations();

    std::set<std::string> uniqueClassTemplates;
    std::set<std::string> uniqueDependencies;
    std::set<std::string> uniqueDeclarations;

    // Actually generate the classes now.
    for (CSchemaClassBinding* i : m_classes)
    {
        // these are nested classes, so they will be defined within the class, but declared at the top of the header.
        if (strstr(i->m_classInfo->m_Name.data, "::"))
            continue;

        Single classGen(i);
        m_generatedHeader += classGen.Generate();

        for (auto& classTemplate : classGen.GetClassTemplates())
            uniqueClassTemplates.insert(classTemplate);

        for (auto& dependency : classGen.GetDependencies())
            uniqueDependencies.insert(dependency);

        for (auto& declaration : classGen.GetDeclarations())
            uniqueDeclarations.insert(declaration);
    }

    for (auto& classTemplate : uniqueClassTemplates)
    {
        m_templateDeclarations += "template < class... Args >\n";
        m_templateDeclarations += "class ";
        m_templateDeclarations += classTemplate + ";\n";
    }

    m_headerDependencies += "#pragma once\n";
    m_headerDependencies += "#include <cstdint>\n";
    m_headerDependencies += "#include \"SchemaBase.hpp\"\n";
    m_headerDependencies += "#include \"SchemaSystem.hpp\"\n";
    m_headerDependencies += "#include \"UnknownType.hpp\"\n";

    for (auto& dependency : uniqueDependencies)
    {
        m_headerDependencies += "#include \"";
        m_headerDependencies += dependency + ".hpp\"\n";
    }

    m_headerDependencies += "/* CLASS DECLARATIONS FROM OTHER HEADERS */\n";
    m_headerDependencies += "namespace schema { class CSchemaClassBinding; }\n";

    for (auto& declaration : uniqueDeclarations)
    {
        m_headerDependencies += "class " + declaration + ";\n";
    }

    m_headerDependencies += "/* END CLASS DECLARATIONS FROM OTHER HEADERS */\n";

    out << m_headerDependencies << m_templateDeclarations << m_generatedHeader;
    out.close();

    return m_generatedHeader;
}

std::string SchemaClassGenerator::GenerateDeclarations()
{
    std::string declarations;

    for (CSchemaClassBinding* i : m_classes)
    {
        if (strstr(i->m_classInfo->m_Name.data, "::"))
            continue;

        declarations += std::string("class ") + i->m_classInfo->m_Name.data;
        declarations += ";\n";
    }

    return declarations;
}

std::string SchemaClassGenerator::Single::GenerateBegin()
{
    std::string beginOfClass;

    if (!m_classInfo || !m_classInfo->m_Name.data)
        return beginOfClass;

    std::vector<const char*> inheritance;
    m_classInfo->FillInheritanceList(inheritance);

    if (m_classInfo->m_nAlignOf != -1)
        beginOfClass += m_prefix + "#pragma pack(push, " + std::to_string(m_classInfo->m_nAlignOf) + ")\n";

    std::string baseName = m_classInfo->m_Name.data;
    baseName = baseName.substr(baseName.find_last_of(":") + 1);

    beginOfClass += m_prefix;
    beginOfClass += std::string("class ") + baseName;

    if (!inheritance.empty())
    {
        beginOfClass += " :";

        for (unsigned int i = 0; i < inheritance.size(); ++i)
        {
            beginOfClass += std::string(" public ") + inheritance[i];

            if (i + 1 < inheritance.size())
                beginOfClass += ",";
        }
    }

    if ((m_classInfo->m_ClassFlags & SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS) && !m_classInfo->InheritsVirtuals())
    {
        if (!inheritance.empty())
            beginOfClass += ", ";
        else
            beginOfClass += " : ";

        beginOfClass += "public SchemaBase";
    }

    beginOfClass += "\n";
    beginOfClass += m_prefix;
    beginOfClass += "{\n";
    //beginOfClass += "public:\n";

    beginOfClass += GenerateAdditionalInformation();
    beginOfClass += "\n";

    return beginOfClass;
}

std::string SchemaClassGenerator::Single::GenerateNestedEnums()
{
    std::string generatedEnums;

    auto& nestedEnums = m_classInfo->m_NestedEnums;

    if (!nestedEnums.data || !nestedEnums.m_size)
        return generatedEnums;

    generatedEnums += m_prefix;
    generatedEnums += "public: ";
    generatedEnums += "\n";

    for (CSchemaEnumInfo** i = nestedEnums.data; i != nestedEnums.data + nestedEnums.m_size; ++i)
    {
        if (!i || !*i)
            continue;

        SchemaEnumGenerator::Single enumGen(*i, "\t");
        generatedEnums += enumGen.Generate();
    }

    return generatedEnums;
}

std::string SchemaClassGenerator::Single::GeneratedNestedClasses()
{
    std::string generatedClasses;

    auto& nestedClasses = m_classInfo->m_NestedClasses;

    if (!nestedClasses.data || !nestedClasses.m_size)
        return generatedClasses;

    generatedClasses += m_prefix;
    generatedClasses += "public: ";
    generatedClasses += "\n";

    for (CSchemaClassInfo** i = nestedClasses.data; i != nestedClasses.data + nestedClasses.m_size; ++i)
    {
        if (!i || !*i)
            continue;

        SchemaClassGenerator::Single classGen(*i, "\t");
        generatedClasses += classGen.Generate();
    }

    return generatedClasses;
}

std::string SchemaClassGenerator::Single::GenerateMembers()
{
    std::string members;

    // the Schema system says this class is 1 byte, but it is actually nothing
    if (std::string("CEntityComponent") == m_classInfo->m_Name.data)
        return members;

    std::vector <SchemaClassFieldData_t*> classFields;
    m_classInfo->FillClassFieldsList(classFields);

    //if (!classFields.size())
        //return members;

    members += m_prefix;
    members += "public:";
    members += "\n";

    bool hasVirtuals = (m_classInfo->m_ClassFlags & SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS) != 0;

    int predictedOffset = m_classInfo->CalculateInheritanceDataSize(hasVirtuals);

    if (hasVirtuals)
        predictedOffset += sizeof(void*);

    short bitFieldBitCount = 0;

    for (SchemaClassFieldData_t* i : classFields)
    {
        CSchemaType* schemaType = i->m_pType;

        if (!schemaType || !i->m_Name.data)
        {
            members += "// unknown...\n";
            continue;
        }

        bool bitField = schemaType->GetTypeCategory() == CSchemaType::Schema_Bitfield;
        bool pointer = schemaType->GetTypeCategory() == CSchemaType::Schema_Ptr;
        bool isArray = schemaType->GetTypeCategory() == CSchemaType::Schema_FixedArray;

        // for some reason these are all messed up
        if (bitField)
            bitFieldBitCount += schemaType->m_Amount;
        else
        {
            while (bitFieldBitCount > 0)
            {
                // size of a byte.
                bitFieldBitCount -= 8;
                ++predictedOffset;
            }

            bitFieldBitCount = 0;
        }

        int size = schemaType->GetSize();
        int alignment = schemaType->GetAlignment();

        if (!bitField)
        {
            // we will use this to get a more accurate size, if the size is somehow completely wrong (negative).
            CSchemaType* underlyingType = schemaType->GetUnderlyingType();

            if (size <= 0)
                size = (isArray ? (underlyingType->GetSize() * schemaType->m_Amount) : 1);
            if (alignment <= 0)
                alignment = (isArray ? underlyingType->GetAlignment() : 1);

            // properly align.
            std::size_t space = m_classInfo->m_nSizeOf - i->m_nSingleInheritanceOffset;
            std::align(alignment, size, (void*&)predictedOffset, space);
        }

        if (!bitField && predictedOffset != i->m_nSingleInheritanceOffset)
        {
            if ((i->m_nSingleInheritanceOffset - predictedOffset) > 0)
                members += GeneratePadding(i->m_nSingleInheritanceOffset, i->m_nSingleInheritanceOffset - predictedOffset);

            predictedOffset += i->m_nSingleInheritanceOffset - predictedOffset;
        }

        std::vector<SchemaClassFieldData_t*>::iterator nextField = std::find(classFields.begin(), classFields.end(), i) + 1;

        // hacky
        if (nextField != classFields.end() && ((*nextField)->m_pType->GetTypeCategory() != CSchemaType::Schema_Bitfield))
        {
            if (size > ((*nextField)->m_nSingleInheritanceOffset - i->m_nSingleInheritanceOffset))
            {
                size = (*nextField)->m_nSingleInheritanceOffset - i->m_nSingleInheritanceOffset;
                alignment = 1;
            }
        }
        else if (nextField == classFields.end())
        {
            if (size + i->m_nSingleInheritanceOffset > m_classInfo->m_nSizeOf)
            {
                size = m_classInfo->m_nSizeOf - i->m_nSingleInheritanceOffset;
                alignment = 1;
            }
        }

        if (!bitField)
            predictedOffset += size;

        std::stringstream commentInfo;
        commentInfo << "0x" << std::hex << i->m_nSingleInheritanceOffset << ", size " << std::dec << size << " (0x" << std::hex << size << ")";

        members += m_prefix + "\t";

        if (alignment > 0)
            members += std::string("__declspec(align(") + std::to_string(alignment) + ")) ";

        std::string memberDefinition;

        if (!bitField)
            memberDefinition = GenerateLegalType(schemaType, i->m_Name, false, size);
        else
            memberDefinition = ((CSchemaType_Bitfield*)schemaType)->TranslateToCPP(i->m_Name.data);

        members += memberDefinition;
        //members += " ";
        //members += i->m_Name.data;
        members += ";";
        members += "// " + commentInfo.str();
        members += "\n";

        if (i->m_Metadata.m_StaticEntries.data)
        {
            members += m_prefix + "\t";
            members += std::string("// ") + i->m_Name.data + " metadata\n";
        }

        // Metadata parsing
        for (auto meta = i->m_Metadata.m_StaticEntries.data; meta && meta != i->m_Metadata.m_StaticEntries.data + i->m_Metadata.m_StaticEntries.m_size; ++meta)
        {
            if (!meta->m_Name.data)
                continue;

            members += m_prefix + "\t" + " // ";
            members += meta->m_Name;
            members += "\n";
        }
    }

    if (predictedOffset != m_classInfo->m_nSizeOf)
    {
        members += GeneratePadding(m_classInfo->m_nSizeOf, m_classInfo->m_nSizeOf - predictedOffset);
        predictedOffset += m_classInfo->m_nSizeOf - predictedOffset;
    }

    return members;
}

std::string SchemaClassGenerator::Single::GenerateStaticMembers()
{
    std::stringstream staticMembers;

    if (!m_classInfo->m_staticMembers.data || !m_classInfo->m_staticMembers.m_size)
        return staticMembers.str();

    staticMembers << m_prefix << "public:" << std::endl;

    //for (auto i = m_classInfo->m_staticMembers.data; i != m_classInfo->m_staticMembers.data + m_classInfo->m_staticMembers.m_size; ++i)
    for (auto& i : m_classInfo->m_staticMembers)
    {
        std::string typeName = "void*";
        std::string definition = typeName + i.m_Name.data;

        CSchemaType* type = i.m_pType;

        if (type)
        {
            definition = GenerateLegalType(type, std::string("&Get_") + i.m_Name.data, true, type->GetSize());
            typeName = definition.substr(0, definition.find("&Get_", 0));
        }

        unsigned int index = (unsigned int)(&i - m_classInfo->m_staticMembers.data);

        bool isArray = type != nullptr ? type->GetTypeCategory() == CSchemaType::Schema_FixedArray : false;

        //staticMembers << "return " << "*(" << typeName << "*)" << "Schema_DynamicBinding()->m_classInfo->m_staticMembers.data[" << index << "].m_pInstance;" << "}" << std::endl;

        staticMembers << m_prefix << "\t";
        staticMembers << "static " << (isArray ? ("/*Array, " + std::to_string(type->m_Amount) + " elements*/") : "") + definition << "() {";
        staticMembers << "return " << "*(" << typeName << "*)";
        staticMembers << "schema::SchemaSystem::Get()->FindTypeScopeForModule(\"" << m_classInfo->m_TypeScope->GetScopeName() << "\")";
        staticMembers << "->FindDeclaredClass(\"" << m_classInfo->m_Name.data << "\")->m_staticMembers.data[" << index << "].m_pInstance; " << "}" << std::endl;
    }

    return staticMembers.str();
}

std::string SchemaClassGenerator::Single::GenerateEnd()
{
    std::stringstream endStream;

    endStream << m_prefix << "}; " << "//" << " size: " << m_classInfo->m_nSizeOf << " (0x" << std::hex << m_classInfo->m_nSizeOf << ")";

    if (m_classInfo->m_nAlignOf != -1)
        endStream << "\n" << m_prefix << "#pragma pack(pop)" << "\n\n";
    else
        endStream << "\n\n";

    return endStream.str();
}

std::string SchemaClassGenerator::Single::GenerateAdditionalInformation()
{
    std::stringstream informationStream;

    bool abstractClass = m_classInfo->m_ClassFlags & SchemaClassFlags_t::SCHEMA_CLASS_IS_ABSTRACT || m_classInfo->m_nAlignOf == -1;

    informationStream << m_prefix << "// " << m_classInfo->m_Name.data << " additional information" << "\n";

    if (m_classBinding)
        informationStream << m_prefix << "// " << m_classBinding->GetBinaryName() << ", project " << m_classBinding->GetProjectName() << "\n";

    informationStream << m_prefix << "// Alignment: " << std::dec << m_classInfo->m_nAlignOf << "\n";
    //informationStream << m_prefix << " // Flags: " << std::dec << m_classInfo->m_ClassFlags << "\n";

    // lol this is so fucking cool.
    static CSchemaEnumInfo* classFlagsDefinition = SchemaSystem::Get()->GlobalTypeScope()->FindDeclaredEnum("SchemaClassFlags_t");

    for (unsigned char i = 0; i < classFlagsDefinition->m_Enumerators.m_size; ++i)
    {
        bool hasFlag = (m_classInfo->m_ClassFlags & (unsigned char)(1 << i)) != 0;

        if (!hasFlag)
            continue;

        SchemaEnumeratorInfoData_t* fieldData = classFlagsDefinition->GetFieldData((unsigned long long)1 << i);

        if (!fieldData)
            continue;

        informationStream << m_prefix << "// " << fieldData->m_Name.data << "\n";
    }

    if (abstractClass)
        informationStream << m_prefix << "// Abstract Class" << "\n";

    return informationStream.str();
}

std::string SchemaClassGenerator::Single::GeneratePadding(unsigned int offset, unsigned int size)
{
    std::stringstream padStream;
    std::string name = m_classInfo->m_Name.data;

    padStream << "char " << name.substr(name.find_last_of(":") + 1) << "_0" << std::hex << std::uppercase << offset << "[0x" << std::hex << size << "];" << "\n";
    return padStream.str();
}

std::string SchemaClassGenerator::Single::GenerateUnknownType(CSchemaType* schemaType, const std::string& name, bool staticMember, int forcedSize)
{
    std::stringstream unknownType;

    bool isAtomic = schemaType->GetTypeCategory() == CSchemaType::Schema_Atomic && schemaType->GetAtomicCategory() != CSchemaType::Atomic_Basic;
    bool isArray = schemaType->GetTypeCategory() == CSchemaType::Schema_FixedArray;
    bool isPointer = schemaType->GetTypeCategory() == CSchemaType::Schema_Ptr;

    std::string nakedTypeName = schemaType->GetName();
    int size = forcedSize;

    // char name[0] is invalid, so...
    if (size <= 0)
        size = schemaType->GetSize();
    if (size <= 0)
        size = 1;

    // 0 meaning "CBitVec" must be found at the start of the string, meaning the type is a CBitVec
    if (nakedTypeName.find("CBitVec") == 0)
    {
        unknownType << "char " << name << "[" << size << "]";
        return unknownType.str();
    }

    if (isArray)
        nakedTypeName = nakedTypeName.substr(0, nakedTypeName.find_last_of("["));

    if (isPointer)
        nakedTypeName = nakedTypeName.substr(0, nakedTypeName.find_last_of("*"));

    if (staticMember && isArray)
        isPointer = true;

    // Atomic types can be assumed to be those that use template parameters.
    if (!isAtomic)
    {
        CSchemaType* nakedType = schemaType->m_TypeScope->FindSchemaTypeByName(nakedTypeName.c_str());

        // this means the type with one element removed (array brackets, or pointer)
        // is still not at its underlying type, i.e. Vector is the underlying type of Vector**
        if (nakedType && nakedType != schemaType)
        {
            bool nakedTypeIsClass = nakedType->GetTypeCategory() == CSchemaType::Schema_DeclaredClass;
            bool nakedTypeIsEnum = nakedType->GetTypeCategory() == CSchemaType::Schema_DeclaredEnum;

            if ((nakedTypeIsClass || nakedTypeIsEnum) && nakedType->m_TypeScope && (nakedType->m_TypeScope != m_classInfo->m_TypeScope || nakedTypeIsEnum))
            {
                std::string dependencyName = nakedType->m_TypeScope->GetScopeName();

                if (nakedTypeIsClass)
                    dependencyName += "_classes";
                else if (nakedTypeIsEnum)
                    dependencyName += "_enums";

                if (nakedTypeIsClass && isPointer)
                    m_declarations.insert(nakedTypeName);

                if (!isPointer)
                    m_scopesDependsOn.insert(dependencyName);
            }

            // recursion to generate each part of the member name, [underlying type][* for pointer][member name][[array amount]]
            // example: Vector* m_Example[12];
            unknownType << GenerateUnknownType(nakedType, std::string(isPointer ? "*" : "") + name);

            if (!staticMember && isArray)
                unknownType << "[" << std::dec << schemaType->m_Amount << "]";
        }
        // the underlying type, under the arrays, pointers, etc...
        else if (std::find(s_knownTypes.begin(), s_knownTypes.end(), nakedTypeName) == s_knownTypes.end())
        {
            std::string memberDefinition = s_typedefs[nakedTypeName];

            if (!memberDefinition.length())
            {
                unknownType << "UnknownType <0x" << std::hex << size << ", class " << nakedTypeName << "> ";
                unknownType << name;
            }
            else
                unknownType << memberDefinition << " " << name;
        }
        else
            unknownType << schemaType->GetName() << " " << name;
    }
    else
    {
        std::string typePrefix = "";

        switch (schemaType->GetAtomicCategory())
        {
        case CSchemaType::Atomic_T:
            nakedTypeName = nakedTypeName.substr(0, nakedTypeName.find_first_of("<"));

            m_classTemplates.insert(nakedTypeName);

            if (schemaType->GetInnerType()->GetTypeCategory() == CSchemaType::Schema_DeclaredClass)
                typePrefix = "class ";

            // recursion to define each inner type
            unknownType << "UnknownAtomicType <0x" << std::hex << size << ", " << nakedTypeName << ", " << typePrefix << GenerateUnknownType(schemaType->GetInnerType(), "") << "> ";
            unknownType << name;

            //unknownType << generateUnknownType(schemaType->GetInnerType(), "");

            break;
        case CSchemaType::Atomic_TT:
            unknownType << " /* Atomic_TT */";
            break;
        case CSchemaType::Atomic_Basic:
        case CSchemaType::Atomic_None:
        default:
            unknownType << schemaType->GetName() << " " << name;
            break;
        }
    }

    return unknownType.str();
}
std::string SchemaClassGenerator::Single::GenerateLegalType(CSchemaType* schemaType, const std::string& name, bool staticMember, int forcedSize /*= -1*/)
{
    std::string memberDefinition = s_typedefs[schemaType->GetName()];

    if (!memberDefinition.length())
    {
        memberDefinition = schemaType->GetName();
        memberDefinition += " ";
        memberDefinition += name;

        if ((schemaType->GetTypeCategory() == CSchemaType::Schema_DeclaredClass || schemaType->GetTypeCategory() == CSchemaType::Schema_DeclaredEnum)
            && schemaType->m_TypeScope && schemaType->m_TypeScope != m_classInfo->m_TypeScope)
        {
            std::string dependencyName = schemaType->m_TypeScope->GetScopeName();

            if (schemaType->GetTypeCategory() == CSchemaType::Schema_DeclaredClass)
                dependencyName += "_classes";
            else if (schemaType->GetTypeCategory() == CSchemaType::Schema_DeclaredEnum)
                dependencyName += "_enums";

            m_scopesDependsOn.insert(dependencyName);
        }

        if (schemaType->GetTypeCategory() != CSchemaType::Schema_Bitfield && std::find(s_knownTypes.begin(), s_knownTypes.end(), schemaType->GetName()) == s_knownTypes.end())
            memberDefinition = GenerateUnknownType(schemaType, name, staticMember, forcedSize);
    }
    else
    {
        memberDefinition += " ";
        memberDefinition += name;
    }

    return memberDefinition;
}

SchemaClassGenerator::Single::Single(CSchemaClassInfo* classInfo, const std::string& prefix /*= ""*/)
    : m_classBinding(nullptr),
    m_classInfo(classInfo),
    m_prefix(prefix)
{

}

SchemaClassGenerator::Single::Single(CSchemaClassBinding* classBinding, const std::string& prefix /*= ""*/)
    : m_classBinding(classBinding),
    m_classInfo((CSchemaClassInfo*)classBinding->m_classInfo),
    m_prefix(prefix)
{

}

std::string& SchemaClassGenerator::Single::Generate()
{
    m_generatedClass += GenerateBegin();
    m_generatedClass += GenerateNestedEnums();
    m_generatedClass += GeneratedNestedClasses();
    m_generatedClass += GenerateMembers();
    m_generatedClass += GenerateStaticMembers();
    m_generatedClass += GenerateEnd();

    return m_generatedClass;
}

std::set<std::string>& SchemaClassGenerator::Single::GetClassTemplates()
{
    return m_classTemplates;
}

std::set<std::string>& SchemaClassGenerator::Single::GetDependencies()
{
    return m_scopesDependsOn;
}

std::set<std::string>& SchemaClassGenerator::Single::GetDeclarations()
{
    return m_declarations;
}
