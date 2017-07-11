#pragma once
#include <list>
#include <map>
#include "../Header/Stat.hpp"

class Stats
{
public:
	std::list<Stat> * GetStats()
	{
		std::list<Stat> *stats = new std::list<Stat>();

		for (auto kvp : this->statMap) 
		{
			stats->push_back(*(kvp.second));
		}

		return stats;
	}

protected:

private:
	std::map<std::string, Stat *> statMap;
};