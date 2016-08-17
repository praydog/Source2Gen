#pragma once

#include "Address.hpp"
#include "Utility.hpp"

namespace schema
{
    class CSchemaClassBinding;
}

template
<class T = schema::CSchemaClassBinding>
class SchemaList
{
public:
    class SchemaBlock
    {
    public:
        SchemaBlock* Next();
        T* GetBinding();

    private:
        void* unk;
        SchemaBlock* m_nextBlock;
        T* m_classBinding;
    };

    class BlockContainer
    {
    public:
        BlockContainer* Next();
        SchemaBlock* GetFirstBlock();

    private:
        void* unk;
        char padding[0x10];
        SchemaBlock* m_firstBlock;
    };

public:
    unsigned int GetNumSchema() const {
        return m_numSchema;
    }

    BlockContainer* GetFirstBlockContainer() {
        return (BlockContainer*)&m_blockContainers;
    }

private:
    char padding[0xC];
    unsigned int m_numSchema; // 0xC - 0x10
    char padding2[0x10]; // 0x10 - 0x20
    void* padding3[4]; // 0x20 - 0x30 (0x20 - 0x40 on x64)
#ifdef VR_PERFORMANCE_TEST
    void* vrPadding;
#endif
    // List of block linked lists.
    BlockContainer m_blockContainers[256]; // 0x30 (0x40 on x64, 0x48 for VR performance test)
};


template
<class T>
typename SchemaList<T>::SchemaBlock* SchemaList<T>::SchemaBlock::Next()
{
    return m_nextBlock;
}

template
<class T>
T* SchemaList<T>::SchemaBlock::GetBinding()
{
    return m_classBinding;
}

template
<class T>
typename SchemaList<T>::BlockContainer* SchemaList<T>::BlockContainer::Next()
{
    return (SchemaList<T>::BlockContainer*)((uintptr_t)(this) + sizeof(SchemaList<T>::BlockContainer));
}

template
<class T>
typename SchemaList<T>::SchemaBlock* SchemaList<T>::BlockContainer::GetFirstBlock()
{
    return m_firstBlock;
}
