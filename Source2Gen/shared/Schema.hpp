#pragma once

// Many of these classes can actually be defined by the Schema system itself
// But the classes that the Schema define are sometimes missing class members,
// leaving part of the class definition unknown.

// So, reversing had to be done on some of these to figure out their unknown members.

#include <vector>

#include "Utility.hpp"

namespace schema
{
    enum SchemaClassFlags_t
    {
        SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS = 1,
        SCHEMA_CLASS_IS_ABSTRACT = 2,
        SCHEMA_CLASS_HAS_TRIVIAL_CONSTRUCTOR = 4,
        SCHEMA_CLASS_HAS_TRIVIAL_DESTRUCTOR = 8,
        SCHEMA_CLASS_TEMP_HACK_HAS_NOSCHEMA_MEMBERS = 16,
        SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS = 32,
        SCHEMA_CLASS_TEMP_HACK_HAS_DESTRUCTOR_LIKE_METHODS = 64,
        SCHEMA_CLASS_IS_NOSCHEMA_CLASS = 128,
    };

    enum SchemaFieldType_t
    {
        SCHEMA_FIELD_TYPE_UNKNOWN = 0,
        SCHEMA_FIELD_TYPE_STRUCT = 1,
        SCHEMA_FIELD_TYPE_ENUM = 2,
        SCHEMA_FIELD_TYPE_EXT_REFERENCE = 3,
        SCHEMA_FIELD_TYPE_CHAR = 4,
        SCHEMA_FIELD_TYPE_UCHAR = 5,
        SCHEMA_FIELD_TYPE_INT = 6,
        SCHEMA_FIELD_TYPE_UINT = 7,
        SCHEMA_FIELD_TYPE_FLOAT = 8,
        SCHEMA_FIELD_TYPE_DOUBLE = 9,
        SCHEMA_FIELD_TYPE_INT8 = 10,
        SCHEMA_FIELD_TYPE_UINT8 = 11,
        SCHEMA_FIELD_TYPE_INT16 = 12,
        SCHEMA_FIELD_TYPE_UINT16 = 13,
        SCHEMA_FIELD_TYPE_INT32 = 14,
        SCHEMA_FIELD_TYPE_UINT32 = 15,
        SCHEMA_FIELD_TYPE_INT64 = 16,
        SCHEMA_FIELD_TYPE_UINT64 = 17,
        SCHEMA_FIELD_TYPE_FLOAT32 = 18,
        SCHEMA_FIELD_TYPE_FLOAT64 = 19,
        SCHEMA_FIELD_TYPE_TIME = 20,
        SCHEMA_FIELD_TYPE_VECTOR2D = 21,
        SCHEMA_FIELD_TYPE_VECTOR3D = 22,
        SCHEMA_FIELD_TYPE_VECTOR4D = 23,
        SCHEMA_FIELD_TYPE_QANGLE = 24,
        SCHEMA_FIELD_TYPE_QUATERNION = 25,
        SCHEMA_FIELD_TYPE_VMATRIX = 26,
        SCHEMA_FIELD_TYPE_FLTX4 = 27,
        SCHEMA_FIELD_TYPE_COLOR = 28,
        SCHEMA_FIELD_TYPE_UNIQUEID = 29,
        SCHEMA_FIELD_TYPE_BOOL = 30,
        SCHEMA_FIELD_TYPE_RESOURCE_STRING = 31,
        SCHEMA_FIELD_TYPE_VOID = 32,
        SCHEMA_FIELD_TYPE_MATRIX3X4 = 33,
        SCHEMA_FIELD_TYPE_UTLSYMBOL = 34,
        SCHEMA_FIELD_TYPE_UTLSTRING = 35,
        SCHEMA_FIELD_TYPE_MATRIX3X4A = 36,
        SCHEMA_FIELD_TYPE_UTLBINARYBLOCK = 37,
        SCHEMA_FIELD_TYPE_UUID = 38,
        SCHEMA_FIELD_TYPE_OPAQUE_TYPE = 39,
        SCHEMA_FIELD_TYPE_TRANSFORM = 40,
        SCHEMA_FIELD_TYPE_DEF_REFERENCE = 41,
        SCHEMA_FIELD_TYPE_RADIANEULER = 42,
        SCHEMA_FIELD_TYPE_DEGREEEULER = 43,
        SCHEMA_FIELD_TYPE_FOURVECTORS = 44,
        SCHEMA_FIELD_TYPE_COUNT = 45,
    };
}


// namespace so these can be used if required in the generated classes, as Source2Gen will generate some of these classes (conflicting names)
namespace schema
{
    class Schema;
    class SchemaSystem;
    class CSchemaClassBinding;
    class CSchemaEnumBinding;
    class CSchemaClassInfo;
    class CSchemaEnumInfo;
    class CSchemaSystemTypeScope;
    class CSchemaType;

    struct SchemaString_t;
    struct SchemaMetadataEntryData_t;
    struct SchemaMetadataSetData_t;
    struct SchemaClassInfoData_t;

    struct SchemaString_t
    {
        operator std::string()
        {
            return data;
        }

        const char* data;
        unsigned int size;
    };

    template <typename T>
    struct SchemaArray_t
    {
        T* begin() const { return data; }
        T* end() const { return data + m_size; }

        T* data;
        unsigned int m_size;
    };

    class CSchemaType
    {
    public:
        enum ETypeCategory
        {
            Schema_Builtin = 0,
            Schema_Ptr = 1,
            Schema_Bitfield = 2,
            Schema_FixedArray = 3,
            Schema_Atomic = 4,
            Schema_DeclaredClass = 5,
            Schema_DeclaredEnum = 6,
            Schema_None = 7
        };

        enum EAtomicCategory
        {
            Atomic_Basic = 0,
            Atomic_T = 1,
            Atomic_TT = 2,
            Atomic_I = 3,
            Atomic_None = 4
        };

    public:
        virtual ETypeCategory GetTypeCategory() = 0;
        virtual bool CanAllocate() = 0;
        virtual void Allocate() = 0;
        virtual void AllocateAndCopy(void const*) = 0;
        virtual void Copy(void*, void const*) = 0;
        virtual void Deallocate(void*) = 0;
        virtual EAtomicCategory GetAtomicCategory() = 0;
        virtual bool IsValid() = 0;

    public:
        int GetSize();
        int GetAlignment();

        // only works on atomic types.
        CSchemaType* GetInnerType();
        CSchemaType* GetInnermostType();
        bool IsA(CSchemaType* schemaType);

        const char* GetName();
        std::string GetBaseName();
        CSchemaType* GetUnderlyingType();

    public:
        const char* m_Name; // 4

        void* m_unk1; // 8
        void* m_unk2; // C

        int m_Size; // 10
        int m_Align; // 14

        // not 100% sure
        CSchemaSystemTypeScope* m_TypeScope;

        unsigned int m_Amount;

    private:
        static const unsigned int s_getSizeIndex = 8;
        static const unsigned int s_getAlignmentIndex = s_getSizeIndex + 1;
        static const unsigned int s_getInnerTypeIndex = s_getSizeIndex + 4;
        static const unsigned int s_getInnermostTypeIndex = s_getInnerTypeIndex + 1;
        static const unsigned int s_isAIndex = s_getInnermostTypeIndex + 1;
    };

    class CSchemaType_Bitfield : public CSchemaType
    {
    public:
        std::string TranslateToCPP(const char* memberName);
    };

    class Schema
    {
    public:
        const char* m_name; //0x0000 
        char _0x0004[4];
        CSchemaClassBinding* m_classBinding; //0x0008 

    };//Size=0x000C

    class CSchemaClassBinding
    {
    public:
        virtual const char* GetBindingName() = 0;
        virtual CSchemaClassBinding* AsClassBinding() = 0;
        virtual CSchemaEnumBinding* AsEnumBinding() = 0;
        virtual const char* GetBinaryName() = 0;
        virtual const char* GetProjectName() = 0;

    public:
        void* unknown[2];
        const char* m_bindingName; //0x000C 
        char _0x0010[4];
        CSchemaClassInfo* m_classInfo; //0x0014 

    };

    class CSchemaEnumBinding
    {
    public:
        virtual const char* GetBindingName() = 0;
        virtual CSchemaClassBinding* AsClassBinding() = 0;
        virtual CSchemaEnumBinding* AsEnumBinding() = 0;
        virtual const char* GetBinaryName() = 0;
        virtual const char* GetProjectName() = 0;

    public:
        const char* m_bindingName; //0x0004 
        char* m_dllName;
        char* m_libraryName;
        void* unknown[2];
        CSchemaEnumInfo* m_enumInfo; //0x0018 

    };

    struct SchemaMetadataEntryData_t
    {
        SchemaString_t m_Name;
        CSchemaType* m_pDataType;
        void* unaccounted;
    };

    struct SchemaMetadataSetData_t
    {
        SchemaArray_t<SchemaMetadataEntryData_t> m_StaticEntries;
        void* unaccounted[2];
    };

    struct SchemaClassFieldData_t
    {
        SchemaString_t m_Name;
        CSchemaType* m_pType;
        int m_nSingleInheritanceOffset;
        SchemaMetadataSetData_t m_Metadata;
    };

    struct SchemaStaticFieldData_t
    {
        SchemaString_t m_Name;
        CSchemaType* m_pType;
        void* m_pInstance;
        SchemaMetadataSetData_t m_Metadata;
    };

    struct SchemaBaseClassInfoData_t
    {
        unsigned int m_nOffset;
        CSchemaClassInfo* m_pClass;
    };

    struct SchemaMetaModifyAdd_t
    {
        SchemaString_t m_TagName;
        CSchemaType* m_pTagDataType;
        void* m_pTagValue;
    };

    struct SchemaFieldMetadataOverrideData_t
    {
        SchemaString_t m_FieldName;
        bool m_bRemoveAll;
        SchemaArray_t < SchemaMetaModifyAdd_t > m_ModifyAdds;
        SchemaArray_t < SchemaString_t > m_ModifyRemoves;
    };

    // Classes
    struct SchemaClassInfoData_t
    {
        SchemaString_t m_Name; // 0x00

        // Not in the Schema description.
        const char* m_Description; // 0x08 (0x10 on x64)

        int m_nSizeOf; // 0xC // 0x18 on x64
        int m_nAlignOf; // 0x10 // 0x1C on x64

        SchemaArray_t < SchemaClassFieldData_t > m_Fields; // 0x14 (0x20)

        // Not in the Schema description.
        SchemaArray_t < SchemaStaticFieldData_t > m_staticMembers; // 0x1C (0x30)

        SchemaArray_t < SchemaBaseClassInfoData_t > m_BaseClasses; // 0x24 (0x40)
        SchemaArray_t < SchemaFieldMetadataOverrideData_t > m_FieldMetadataOverrides; // 0x2C (0x50)
        SchemaArray_t < CSchemaClassInfo* > m_NestedClasses; // 0x34 (0x60)
        SchemaArray_t < CSchemaEnumInfo* > m_NestedEnums; // 0x3C (0x70)

        SchemaMetadataSetData_t m_Metadata; // 0x44 (0x80)
        CSchemaSystemTypeScope* m_TypeScope; // 0x54 -> 0x58 (0x90 -> 0x98)

        //char unknown[0xC]; // 0x58 -> 0x64

        // attempting to make this compatible with x64.
        void* unknown[2];
        unsigned int filler;

        SchemaClassFlags_t m_ClassFlags : 8; // 0x64 (0xBC)
    };

    class CSchemaClassInfo : public SchemaClassInfoData_t
    {
    public:
        bool GetMetaStrings(const char* metaName, std::vector<const char**>& strings);

        unsigned int CalculateInheritanceDataSize(bool ignoreVirtuals = false);

        bool DependsOn(CSchemaClassInfo* other);
        bool InheritsFrom(CSchemaClassInfo* other);
        bool UsesClass(CSchemaClassInfo* other);
        bool InheritsVirtuals();

        void FillClassFieldsList(std::vector<SchemaClassFieldData_t*>& fields);
        void FillInheritanceList(std::vector<const char*>& inheritance);

    private:
    };

    struct SchemaEnumeratorInfoData_t
    {
        SchemaString_t m_Name;
        union
        {
            unsigned char m_nValueChar;
            unsigned short m_nValueShort;
            unsigned int m_nValueInt;
            unsigned long long m_nValue;
        };
        SchemaMetadataSetData_t m_Metadata;
    };

    // Enums
    struct SchemaEnumInfoData_t
    {
        SchemaString_t m_Name;

        // Not in the Schema description.
        const char* m_Description; //0x0008

        unsigned int m_nSizeOf;
        unsigned int m_nAlignOf;
        SchemaArray_t < SchemaEnumeratorInfoData_t > m_Enumerators;
        SchemaMetadataSetData_t m_MetaData;
    };

    class CSchemaEnumInfo : public SchemaEnumInfoData_t
    {
    public:
        CSchemaSystemTypeScope* GetTypeScope() {
            return m_typeScope;
        }

        SchemaEnumeratorInfoData_t* GetFieldData(const std::string& fieldName);
        SchemaEnumeratorInfoData_t* GetFieldData(decltype(SchemaEnumeratorInfoData_t::m_nValue) fieldValue);

        void FillEnumFieldsList(std::vector<SchemaEnumeratorInfoData_t*>& fields);

    private:
        CSchemaSystemTypeScope* m_typeScope;
    };
}