#pragma once
#include <list>
#include "../Header/Item.hpp"
#include "../../DataModel/Header/Stat.hpp"

class Equippable : public Item
{
public:
	void SetEquipped(bool equipped) 
	{
		this->equipped = equipped;
	};

protected:

private:
	std::list<Stat> x;
	bool equipped;
};