#pragma once
#include <list>
#include "Item.h"
#include "..\DataModel\Stat.h"

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