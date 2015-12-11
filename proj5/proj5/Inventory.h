#ifndef INVENTORY_H
#define INVENTORY_H

#include "Part.h"
#include "Wheel.h"
#include "Antenna.h"
#include "Mirror.h"
#include "Battery.h"
#include <vector>

class Inventory
{
private:
	vector<Part> parts;
	vector<Wheel> wheels;
	vector<Antenna> antennas;
	vector<Mirror> mirrors;
	vector<Battery> batteries;

public:
	Inventory();
	~Inventory();

	void AddWheel(Wheel);
	void AdddAntenna(Antenna);
	void AddMirror(Mirror);
	void AddBattery(Battery);
	void PrintInventory();
	void PrintByPart(Part::PartTypes);
};

#endif