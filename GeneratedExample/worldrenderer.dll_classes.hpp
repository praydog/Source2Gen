#pragma once
#include <vadefs.h>
#include <stdint.h>
#include "SchemaBase.hpp"
#include "SchemaSystem.hpp"
#include "UnknownType.hpp"
#include "!GlobalTypes_classes.hpp"
/* CLASS DECLARATIONS FROM OTHER HEADERS */
namespace schema { class CSchemaClassBinding; }
class CEntityIdentity;
/* END CLASS DECLARATIONS FROM OTHER HEADERS */
class CScriptComponent;
class CEntityInstance;
#pragma pack(push, 4)
class CScriptComponent : public CEntityComponent
{
// CScriptComponent additional information
// worldrenderer.dll, project entity2
// Alignment: 4
// SCHEMA_CLASS_TEMP_HACK_HAS_NOSCHEMA_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS
// SCHEMA_CLASS_TEMP_HACK_HAS_DESTRUCTOR_LIKE_METHODS

public:
char CScriptComponent_018[0x17];
	__declspec(align(4)) UnknownType <0x4, class CUtlSymbolLarge> m_scriptClassName;// 0x18, size 4 (0x4)
public:
	static EntComponentInfo_t Get_s_EntComponentInfo() {return *(EntComponentInfo_t *)schema::SchemaSystem::Get()->FindTypeScopeForModule("worldrenderer.dll")->FindDeclaredClass("CScriptComponent")->m_staticMembers.data[0].m_pInstance; }
	static int32_t Get_entity_component_error_class_decl_says_contained_but_impl_is_referenced() {return *(int32_t *)schema::SchemaSystem::Get()->FindTypeScopeForModule("worldrenderer.dll")->FindDeclaredClass("CScriptComponent")->m_staticMembers.data[1].m_pInstance; }
}; // size: 28 (0x1c)
#pragma pack(pop)

class CEntityInstance : public IHandleEntity
{
// CEntityInstance additional information
// worldrenderer.dll, project entity2
// Alignment: -1
// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_NOSCHEMA_MEMBERS
// SCHEMA_CLASS_TEMP_HACK_HAS_CONSTRUCTOR_LIKE_METHODS
// SCHEMA_CLASS_TEMP_HACK_HAS_DESTRUCTOR_LIKE_METHODS
// Abstract Class

public: 
	class CEntityInstanceEntityClass : public CEntityClass
	{
	// CEntityInstance::CEntityInstanceEntityClass additional information
	// Alignment: -1
	// SCHEMA_CLASS_HAS_VIRTUAL_MEMBERS
	// Abstract Class

	public:
	}; // size: 388 (0x184)

public:
	__declspec(align(4)) CEntityIdentity *m_pEntity;// 0x4, size 4 (0x4)
	// m_pEntity metadata
	 // MNetworkEnable
	 // MNetworkPriority
char CEntityInstance_0C[0x4];
	__declspec(align(4)) UnknownType <0x4, class CUtlSymbolLarge> m_iszPrivateVScripts;// 0xc, size 4 (0x4)
	// m_iszPrivateVScripts metadata
	 // MKeyfieldname
	 // MNetworkDisable
	__declspec(align(4)) UnknownType <0x4, class CUtlStringToken> m_worldGroupId;// 0x10, size 4 (0x4)
	// m_worldGroupId metadata
	 // MKeyfieldname
	 // MNetworkDisable
	__declspec(align(4)) CScriptComponent *m_CScriptComponent;// 0x14, size 4 (0x4)
	// m_CScriptComponent metadata
	 // MNetworkEnable
	 // MNetworkDisable
}; // size: 24 (0x18)

