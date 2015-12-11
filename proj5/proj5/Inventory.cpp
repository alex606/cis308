/**********************************************
* Name: Alexander Wu							*
* Date: 12/12/2015								*
* Assignment: Project 5: Auto Parts				*
***********************************************
* C++ Inventory system for an AutoParts shop*
***********************************************/

#include "Inventory.h"
#include <vector>
#include <algorithm>

using namespace std;

Inventory::Inventory()
{
}


Inventory::~Inventory()
{
}

void Inventory::AddWheel(Wheel wheel)
{
	wheels.push_back(wheel);
	parts.push_back(wheel);
}

void Inventory::AdddAntenna(Antenna antenna)
{
	antennas.push_back(antenna);
	parts.push_back(antenna);
}

void Inventory::AddMirror(Mirror mirror)
{
	mirrors.push_back(mirror);
	parts.push_back(mirror);
}

void Inventory::AddBattery(Battery battery)
{
	batteries.push_back(battery);
	parts.push_back(battery);
}

void Inventory::PrintInventory()
{
	cout << "OEM \t Manufacturer \t Name \t Quantity \t Inventory Cost" << endl;

	sort(parts.begin(), parts.end());


	for (int i = 0; i < parts.size(); i++)
	{
		parts[i].print();
	}
	cout << endl;
}

void Inventory::PrintByPart(Part::PartTypes pt)
{
	cout << Part::GetType(pt) << endl;
	cout << "OEM \t Manufacturer \t Description \t Quantity \t Price Each" << endl;
	switch (pt){
		case Part::Wheel:
			sort(wheels.begin(), wheels.end());
			for (int i = 0; i < wheels.size(); i++)
			{
				wheels[i].print();
			}
			break;
		case Part::Antenna:
			sort(antennas.begin(), antennas.end());
			for (int i = 0; i < antennas.size(); i++)
			{
				antennas[i].print();
			}
			break;
		case Part::Battery:
			sort(batteries.begin(), batteries.end());
			for (int i = 0; i < batteries.size(); i++)
			{
				batteries[i].print();
			}
			break;
		case Part::Mirror:
			sort(mirrors.begin(), mirrors.end());
			for (int i = 0; i < mirrors.size(); i++)
			{
				mirrors[i].print();
			}
			break;

			cout << endl;
	}
}
