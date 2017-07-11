#pragma once
#include<map>
#include<typeinfo>

class Process
{
public:
	Process()
	{
		this->active = false;
	}

	template <typename T>
	void InjectDependency(T *dependecy)
	{
		auto x = std::typeid(*dependecy);
	}

	bool TryStart()
	{

	}

	void Update()
	{
		++this->tick;
	}

protected:

private:
	std::map<std::type_info, int> dependencies;
	bool active;
	int tick;
	int tickLimit;
};