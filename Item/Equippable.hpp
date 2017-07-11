#pragma once
#include <list>
#include "Item.hpp"
#include "..\DataModel\Stat.hpp"

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