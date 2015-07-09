#pragma once

#include "Utility.hpp"

#include "Schema.hpp"

class ClientClass
{
public:
	const char* m_networkName; //0x0000 
	const char* m_name;
	ClientClass* m_next; //0x0008 
	void* m_createFn; //0x000C 
	void* m_destroyFn; //0x0010 
	char _0x0014[8];

	// not its type name
	Schema* m_schema; //0x001C 
	char _0x0020[4];
	__int32 m_classId; //0x0024 
	void* m_stringThing; //0x0028 
	__int8 m_byte; //0x002C 
	char _0x002D[3];

};//Size=0x0030
