#include "CraftProcess.hpp"
#include "..\Item\Equippable.hpp"
#include "..\Item\ItemTemplate.hpp"

int main()
{
	auto x = new ItemTemplate<Equippable>();
	auto craftProcess = new CraftProcess<Equippable>(x);
	Equippable *equippable = craftProcess->Complete();
}