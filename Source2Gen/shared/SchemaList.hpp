#pragma once

#include <iterator>
#include <array>

#include "Address.hpp"
#include "Utility.hpp"

namespace schema {
    class CSchemaClassBinding;
}

template
<class T = schema::CSchemaClassBinding>
class SchemaList {
public:
    class SchemaBlock {
    public:
        SchemaBlock* Next() const;
        T* GetBinding() const;

    private:
        void* unk;
        SchemaBlock* m_nextBlock;
        T* m_classBinding;
    };

    class BlockContainer {
    public:
        SchemaBlock* GetFirstBlock() const;

    private:
        void* unk;
        char padding[0x10];
        SchemaBlock* m_firstBlock;
    };

    typedef std::array<BlockContainer, 256> BlockContainers;

public:
    unsigned int GetNumSchema() const {
        return m_numSchema;
    }

    const BlockContainers& GetBlockContainers() const {
        return m_blockContainers;
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
    BlockContainers m_blockContainers;
};


template
<class T>
typename SchemaList<T>::SchemaBlock* SchemaList<T>::SchemaBlock::Next() const {
    return m_nextBlock;
}

template
<class T>
T* SchemaList<T>::SchemaBlock::GetBinding() const {
    return m_classBinding;
}

template
<class T>
typename SchemaList<T>::SchemaBlock* SchemaList<T>::BlockContainer::GetFirstBlock() const {
    return m_firstBlock;
}
