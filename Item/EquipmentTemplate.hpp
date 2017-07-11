#pragma once
#include "ItemTemplate.hpp"
#include "Equippable.hpp"

template<typename T>
class EquipmentTemplate : public ItemTemplate<T>
{
public:
	EquipmentTemplate<T>::EquipmentTemplate<T>()
	{
		static_assert(std::is_base_of<Equippable, T>::value, "type parameter of this class must derive from Equippable");
	}



protected:

private:

};