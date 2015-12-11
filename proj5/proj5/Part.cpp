#include "Part.h"


Part::Part(void)
{
	this->OEM = "null";
	this->Manufacturer = "null";
}

Part::Part(string oem, string manufacturer, int quantity, float price, Part::PartTypes pt)
{
	Types[0] = "Wheel";
	Types[1] = "Antenna";
	Types[2] = "Battery";
	Types[3] = "Mirror";
	this->PartType = Types[pt];

	this->OEM = oem;
	this->Manufacturer = manufacturer;
	this->Quantity = quantity;
	this->Price = price;
}
Part::~Part()
{
}

void Part::print()
{
	cout << OEM << "\t" 
		<< Manufacturer << "\t" 
		<< PartType << "\t" 
		<< Quantity << "\t" 
		<< Price << endl;
}

string Part::GetName()
{
	return PartType;
}
