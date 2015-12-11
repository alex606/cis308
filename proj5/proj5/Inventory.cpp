#include "Inventory.h"
#include <vector>


using namespace std;

Inventory::Inventory(Part startPart)
{
	parts.push_back(startPart);
}


Inventory::~Inventory()
{
}

void Inventory::AddPart(Part newItem)
{
	parts.push_back(newItem);
}

void Inventory::showTest()
{
	cout << parts[0].GetName() << endl;
	cout << parts[1].GetName() << endl;

}