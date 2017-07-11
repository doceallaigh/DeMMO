#pragma once
#include "../../DataModel/Header/Process.hpp"
#include "../../Item/Header/Item.hpp"
#include "../../Item/Header/ItemTemplate.hpp"
#include "../../DataModel/Header/Process.hpp"

template<typename T> 
class CraftProcess : Process
{
public:
	CraftProcess(ItemTemplate<T> *itemTemplate)
		: Process()
	{
		static_assert(std::is_base_of<Item, T>::value, "type parameter of this class must derive from Item");
		this->itemTemplate = itemTemplate;
	}

	T * Complete()
	{
		return NULL;// this->itemTemplate->GenerateInstance(cumulativeQuality / numCraftActions);
	}

	void Craft()
	{
		cumulativeQuality += this->qualityGauge[this->tick % this->tickLimit];
		++numCraftActions;
	}

private:
	ItemTemplate<T> *itemTemplate;
	float cumulativeQuality;
	int numCraftActions;
};