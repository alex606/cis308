/**********************************************
* Name: Alexander Wu							*
* Date: 12/12/2015								*
* Assignment: Project 5: Auto Parts				*
***********************************************
* C++ Inventory system for an AutoParts shop*
***********************************************/

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
	// Each component is stored in their own specialized lists,  
	// and all componenets are stored in a general list
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
	void OrganizePartList();
};

#endif