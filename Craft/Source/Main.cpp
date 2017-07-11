#include "../Header/CraftProcess.hpp"
#include "../../Item/Header/Equippable.hpp"
#include "../../Item/Header/ItemTemplate.hpp"

int main()
{
	auto x = new ItemTemplate<Equippable>();
	auto craftProcess = new CraftProcess<Equippable>(x);
	Equippable *equippable = craftProcess->Complete();
}