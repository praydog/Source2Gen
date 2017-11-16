#pragma once

template
<typename T>
T GetVirtual(void* object, unsigned int index) {
    return (*(T**)object)[index];
}
