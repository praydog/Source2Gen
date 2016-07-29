#include "Address.hpp"

Address::Address()
    : m_ptr(nullptr)
{}

Address::Address(void* ptr)
    : m_ptr(ptr)
{}

Address::Address(uintptr_t addr)
    : m_ptr(reinterpret_cast<void*>(addr))
{}