#include <algorithm>
#include <fstream>

#include "SchemaUtil.hpp"
#include "SchemaList.hpp"

using namespace schema;

// Sort by inheritance.
void InheritanceSort(std::vector<CSchemaClassBinding*>& v) {
    for (auto it = v.begin(); it != v.end(); ++it) {
        auto i = (*it);

        if (!i->m_classInfo) {
            continue;
        }

        for (auto& baseClass : i->m_classInfo->m_BaseClasses) {
            if (!baseClass.m_pClass) {
                continue;
            }

            auto baseClassName = baseClass.m_pClass->m_Name.data;

            if (!baseClassName) {
                continue;
            }

            auto inheritedBinding = std::find_if(v.begin(), v.end(), [baseClassName](CSchemaClassBinding* binding) {
                return !strcmp(binding->m_classInfo->m_Name.data, baseClassName);
            });

            if (inheritedBinding != v.end() && inheritedBinding > it) {
                std::iter_swap(inheritedBinding, it);
                it = v.begin();

                break;
            }
        }
    }
}

void ClassSort(std::vector<CSchemaClassBinding*>& v) {
    // Sort by types used by members.
    // e.g. CSomeClass m_someMember;
    // will try to bring CSomeClass to be defined before the class CSomeClass is used in.
    // will also sort by inheritance.
    for (auto it = v.begin(); it != v.end(); ++it) {
        auto i = (*it);

        if (!i->m_classInfo) {
            continue;
        }

        auto& fields = i->m_classInfo->m_Fields;

        for (auto& member : fields) {
            if (!member.m_pType) {
                continue;
            }

            // it's okay to have forward declarations for pointers.
            if (member.m_pType->GetTypeCategory() == CSchemaType::Schema_Ptr) {
                continue;
            }

            std::string baseName = (member.m_pType->GetTypeCategory() == CSchemaType::Schema_FixedArray) ? member.m_pType->GetBaseName() : member.m_pType->GetName();
            // sometimes a member's type can be a nested class/enum of another class, so we need the class it's taking it from.
            baseName = baseName.substr(0, baseName.find_first_of("::"));

            auto memberType = std::find_if(v.begin(), v.end(), [&baseName](CSchemaClassBinding* binding) {
                return !strcmp(binding->m_classInfo->m_Name.data, baseName.c_str());
            });

            if (memberType != v.end() && memberType > it) {
                std::iter_swap(memberType, it);

                // since we swapped, we need to start from the beginning and sort by inheritance again
                it = v.begin();
                InheritanceSort(v);

                break;
            }
        }
    }
}
