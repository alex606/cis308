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

public:
	Inventory();
	~Inventory();

	void AddPart(Part);
	void PrintInventory();

};

#endif