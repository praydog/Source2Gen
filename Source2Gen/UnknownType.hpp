#pragma once

template <unsigned int size = 0x1, class T = BadType>
class UnknownType
{
public:
	T& get()
	{
		return *(T*)&m_data;
	}

	template <class CustomT>
	CustomT& get()
	{
		return *(CustomT*)&m_data;
	}

protected:
	char m_data[size];
};

template <unsigned int size = 0x1, template <typename...> class TOuter = BadType, typename... Args>
class UnknownAtomicType
{
public:
	TOuter<Args...>& get()
	{
		return *(TOuter<Args...>*)&m_data;
	}

	template <typename CustomT>
	CustomT& get()
	{
		return *(CustomT*)&m_data;
	}

protected:
	char m_data[size];
};