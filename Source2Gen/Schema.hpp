#pragma once

// Many of these classes can actually be defined by the Schema system itself
// But the classes that the Schema define are sometimes missing class members,
// leaving part of the class definition unknown.

// So, reversing had to be done on some of these to figure out their unknown members.

#include <vector>

#include "Utility.hpp"

#include "SchemaList.hpp"
#include "SchemaString.hpp"
#include "SchemaEnumerators.hpp"

class Schema;
class CSchemaClassBinding;
class CSchemaEnumBinding;
class CSchemaClassInfo;
class CSchemaEnumInfo;
class CSchemaSystemTypeScope;
class CSchemaType;

struct SchemaMetadataEntryData_t;
struct SchemaMetadataSetData_t;
struct SchemaClassInfoData_t;

// the big dog
class SchemaSystem
{
public:
	static SchemaSystem* Get();

public:
	virtual void Connect(void * (*)(char const*, int *));

public:
	CSchemaSystemTypeScope* GlobalTypeScope();
	CSchemaSystemTypeScope* FindTypeScopeForModule(const char*);
	
private:
	static const unsigned int s_globalTypeScopeIndex = 11;
	static const unsigned int s_findTypeScopeForModuleIndex = s_globalTypeScopeIndex + 2;
};

class CSchemaSystemTypeScope
{
public:
	virtual void* InstallSchemaClassBinding(CSchemaClassBinding*, CSchemaClassInfo*, const char*) = 0;

public:
	CSchemaClassInfo* FindDeclaredClass(const char* name);
	CSchemaEnumInfo* FindDeclaredEnum(const char* name);

	CSchemaType* FindSchemaTypeByName(const char* name);
	CSchemaType* FindType_DeclaredClass(const char* name);
	CSchemaType* FindType_DeclaredEnum(const char* name);
	CSchemaClassBinding* FindRawClassBinding(const char* name);
	CSchemaEnumBinding* FindRawEnumBinding(const char* name);

	SchemaList GetClassList()
	{
		return Address(this).get(s_classList);
	}

	SchemaList GetEnumList()
	{
		return Address(this).get(s_enumList);
	}

	const char* GetScopeName()
	{
		return Address(this).get(0 + sizeof(void*)).as<const char*>();
	}

private:
	static const unsigned int s_findDeclaredClassIndex = 2;
	static const unsigned int s_findDeclaredEnumIndex = s_findDeclaredClassIndex + 1;

	static const unsigned int s_findType_DeclaredClassIndex = 21;
	static const unsigned int s_findType_DeclaredEnumIndex = s_findType_DeclaredClassIndex + 1;
	static const unsigned int s_findRawClassBindingIndex = s_findType_DeclaredEnumIndex + 1;
	static const unsigned int s_findRawEnumBindingIndex = s_findRawClassBindingIndex + 2;

	static const unsigned int s_classList = 0x450;
	static const unsigned int s_enumList = 0x1C90;
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

template <typename T>
struct SchemaArray_t
{
	T* data;
	unsigned int m_size;
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
	SchemaClassInfoData_t* m_classInfo; //0x0014 

};

class CSchemaEnumBinding
{
public:
	virtual const char* GetBindingName() = 0;
	virtual CSchemaClassBinding* AsClassBinding() = 0;
	virtual CSchemaEnumBinding* AsEnumBInding() = 0;
	virtual const char* GetBinaryName() = 0;
	virtual const char* GetProjectName() = 0;

public:
	const char* m_bindingName; //0x0004 
	char _0x0008[16];
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
	char unaccounted[8];
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
	const char* m_Description; // 0x08

	int m_nSizeOf; // 0xC
	int m_nAlignOf; // 0x10

	SchemaArray_t < SchemaClassFieldData_t > m_Fields; // 0x14

	// Not in the Schema description.
	SchemaArray_t < SchemaStaticFieldData_t > m_staticMembers; // 0x1C

	SchemaArray_t < SchemaBaseClassInfoData_t > m_BaseClasses; // 0x24
	SchemaArray_t < SchemaFieldMetadataOverrideData_t > m_FieldMetadataOverrides; // 0x2C
	SchemaArray_t < CSchemaClassInfo* > m_NestedClasses; // 0x34
	SchemaArray_t < CSchemaEnumInfo* > m_NestedEnums; // 0x3C

	SchemaMetadataSetData_t m_Metadata; // 0x44
	CSchemaSystemTypeScope* m_TypeScope; // 0x54 -> 0x58

	//char unknown[0xC]; // 0x58 -> 0x64

	// attempting to make this compatible with x64.
	void* unknown[3];
	
	SchemaClassFlags_t m_ClassFlags : 8; // 0x64
};

class CSchemaClassInfo : public SchemaClassInfoData_t
{
public:
	bool GetMetaStrings(const char* metaName, std::vector<const char**>& strings);

	unsigned int CalculateInheritanceDataSize(bool ignoreVirtuals = false);

	bool DependsOn(CSchemaClassInfo* other);
	bool InheritsFrom(CSchemaClassInfo* other);
	bool UsesClass(CSchemaClassInfo* other);

private:
};

struct SchemaEnumeratorInfoData_t
{
	SchemaString_t m_Name;
	long long m_nValue;
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
	CSchemaSystemTypeScope* getTypeScope() {
		return m_typeScope;
	}

	SchemaEnumeratorInfoData_t* getFieldData(const std::string& fieldName);
	SchemaEnumeratorInfoData_t* getFieldData(decltype(SchemaEnumeratorInfoData_t::m_nValue) fieldValue);

private:
	CSchemaSystemTypeScope* m_typeScope;
};