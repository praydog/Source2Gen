#pragma once

#include "Address.hpp"
#include "Utility.hpp"

namespace schema
{
	class CSchemaClassBinding;
}

class SchemaList : public Address
{
public:
	template
	<class T = schema::CSchemaClassBinding>
	struct SchemaBlock
	{
		void* unk;
		SchemaBlock* nextBlock;
		T* classBinding;
	};

	template
	<class T = schema::CSchemaClassBinding>
	class Iterator : public Address
	{
	public:
		Iterator(Address address);
		Iterator(void* address);
		Iterator Next();
		SchemaBlock<T>* GetFirstBlock();

	private:
		unsigned int m_index;

	private:
#ifdef _M_IX86
		static const unsigned int schemas = 0x14;
		static const unsigned int nextBlock = 0x18;
#elif _M_X64
		static const unsigned int schemas = 0x18;
		static const unsigned int nextBlock = 0x20;
#endif
	};

public:
	SchemaList(Address address);
	SchemaList(void* address);

	unsigned int GetNumSchema() const
	{
		return get(numSchema).to<unsigned int>();
	}

	template
	<class T>
	SchemaList::Iterator<T> GetIterator() 
	{
		return get(schemaBegin);
	}

private:
#ifdef _M_IX86
	static const unsigned int numSchema = 0xC;
	static const unsigned int schemaBegin = 0x30;
	// pre dota 2 winter update 2016
	//static const unsigned int schemaBegin = 0x38;
#elif _M_X64
	static const unsigned int numSchema = 0xC;
	// 0x48 for VR performance test
	static const unsigned int schemaBegin = 0x40;
#endif
};


template <class T>
SchemaList::Iterator<T>::Iterator(Address address)
	: Address(address),
	m_index(0)
{

}

template <class T>
SchemaList::Iterator<T>::Iterator(void* address)
	: Address(address),
	m_index(0)
{

}


template <class T>
SchemaList::Iterator<T> SchemaList::Iterator<T>::Next()
{
	//++m_index;
	//set(get(nextBlock));

	return get(nextBlock);
}

template <class T>
SchemaList::SchemaBlock<T>* SchemaList::Iterator<T>::GetFirstBlock()
{
	return get(schemas).to<SchemaBlock<T>*>();
}
