#pragma once

template
<typename T>
T getVirtual(void* object, unsigned int index)
{
	return (*(T**)object)[index];
}