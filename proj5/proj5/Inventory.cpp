#include "Inventory.h"
#include <vector>


using namespace std;

Inventory::Inventory()
{
}


Inventory::~Inventory()
{
}

void Inventory::AddPart(Part newItem)
{
	parts.push_back(newItem);
}

void Inventory::PrintInventory()
{
	for (int i = 0; i < parts.size(); i++)
	{
		parts[i].print();
	}
}