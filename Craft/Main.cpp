#include "CraftProcess.h"
#include "..\Item\Equippable.h"
#include "..\Item\ItemTemplate.h"

int main()
{
	auto x = new ItemTemplate<Equippable>();
	auto craftProcess = new CraftProcess<Equippable>(x);
	Equippable *equippable = craftProcess->Complete();
}