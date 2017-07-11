#pragma once
#include "Item.hpp"
#include "..\DataModel\Stats.hpp"

template<typename T>
class ItemTemplate
{
public:
	ItemTemplate<T>::ItemTemplate()
	{
		static_assert(std::is_base_of<Item, T>::value, "type parameter of this class must derive from Item");
	}

	T GenerateInstance(Stats *stats) 
	{
		return new T(stats);
	}

protected:

private:

};