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
		Iterator next();
		SchemaBlock<T>* getFirstBlock();

	private:
		unsigned int m_index;

	private:
		static const unsigned int schemas = 0x14;
		static const unsigned int nextBlock = 0x18;
	};

public:
	SchemaList(Address address);
	SchemaList(void* address);

	unsigned int getNumSchema() const
	{
		return get(numSchema).to<unsigned int>();
	}

	template
	<class T>
	SchemaList::Iterator<T> getIterator() 
	{
		return get(schemaBegin);
	}

private:
	static const unsigned int numSchema = 0xC;
	static const unsigned int schemaBegin = 0x38;
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
SchemaList::Iterator<T> SchemaList::Iterator<T>::next()
{
	//++m_index;
	//set(get(nextBlock));

	return get(nextBlock);
}

template <class T>
SchemaList::SchemaBlock<T>* SchemaList::Iterator<T>::getFirstBlock()
{
	return get(schemas).to<SchemaBlock<T>*>();
}
