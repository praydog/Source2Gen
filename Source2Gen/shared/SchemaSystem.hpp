#pragma once

#include "Schema.hpp"
#include "SchemaList.hpp"

namespace schema {
    // the big dog
    class SchemaSystem {
    public:
        static SchemaSystem* Get();

    public:
        virtual void Connect(void * (*)(char const*, int *)) = 0;

    public:
        CSchemaSystemTypeScope* GlobalTypeScope();
        CSchemaSystemTypeScope* FindTypeScopeForModule(const char*);

    private:
        static const unsigned int s_globalTypeScopeIndex = 11;
        static const unsigned int s_findTypeScopeForModuleIndex = s_globalTypeScopeIndex + 2;
    };

    class CSchemaSystemTypeScope {
    public:
        virtual void* InstallSchemaClassBinding(CSchemaClassBinding*, CSchemaClassInfo*, const char*) = 0;

    public:
        /* Virtual function wrappers */
        CSchemaClassInfo* FindDeclaredClass(const char* name);
        CSchemaEnumInfo* FindDeclaredEnum(const char* name);

        CSchemaType* FindSchemaTypeByName(const char* name);
        CSchemaType* FindType_DeclaredClass(const char* name);
        CSchemaType* FindType_DeclaredEnum(const char* name);
        CSchemaClassBinding* FindRawClassBinding(const char* name);
        CSchemaEnumBinding* FindRawEnumBinding(const char* name);

        /* User functions */
        void FillClassBindingList(std::vector<CSchemaClassBinding*>& classBinding);
        void FillEnumInfoList(std::vector<CSchemaEnumInfo*>& enumInfo);

        SchemaList<CSchemaClassBinding>* GetClassList() {
            return Address(this).get(s_classList).as<SchemaList<CSchemaClassBinding>*>();
        }

        SchemaList<CSchemaEnumBinding>* GetEnumList() {
            return Address(this).get(s_enumList).as<SchemaList<CSchemaEnumBinding>*>();
        }

        const char* GetScopeName() {
            return Address(this).get(0 + sizeof(void*)).as<const char*>();
        }

    private:
        static const unsigned int s_findDeclaredClassIndex = 2;
        static const unsigned int s_findDeclaredEnumIndex = s_findDeclaredClassIndex + 1;

        static const unsigned int s_findType_DeclaredClassIndex = 21;
        static const unsigned int s_findType_DeclaredEnumIndex = s_findType_DeclaredClassIndex + 1;
        static const unsigned int s_findRawClassBindingIndex = s_findType_DeclaredEnumIndex + 1;
        static const unsigned int s_findRawEnumBindingIndex = s_findRawClassBindingIndex + 2;

#ifdef _M_IX86
        static const unsigned int s_classList = 0x450;
        static const unsigned int s_enumList = 0x1C90 - 8;
#elif _M_X64
        static const unsigned int s_classList = 0x638;
        // 0x2688 for VR performance test
        static const unsigned int s_enumList = 0x2680;
#endif
    };

}