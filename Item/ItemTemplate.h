#pragma once
#include "Item.h"
#include "..\DataModel\Stats.h"

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