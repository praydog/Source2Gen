#pragma once

#include <vadefs.h>

class Address {
public:
    Address();
    Address(void* ptr);
    Address(uintptr_t addr);

    void set(void* ptr) {
        m_ptr = ptr;
    }

    template <typename T>
    Address get(T offset) const {
        return Address(reinterpret_cast<uintptr_t>(m_ptr) + offset);
    }

    template <typename T>
    T as() const {
        return reinterpret_cast<T>(m_ptr);
    }

    // to is like as but dereferences that shit.
    template <typename T>
    T to() const {
        return *reinterpret_cast<T*>(m_ptr);
    }

    void* ptr() const {
        return m_ptr;
    }

    operator uintptr_t() const {
        return reinterpret_cast<uintptr_t>(m_ptr);
    }

    operator void*() const {
        return m_ptr;
    }

    bool operator ==(bool val) {
        if ((m_ptr && val) || (!m_ptr && !val)) {
            return true;
        }
        else {
            return false;
        }
    }

    bool operator !=(bool val) {
        return  !(*this == val);
    }

private:
    void* m_ptr;
};

typedef Address Offset;