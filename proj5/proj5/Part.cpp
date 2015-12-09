#include "Part.h"
#include <iostream>
#include <string>

Part::Part(void)
{
	this->OEM = "null";
	this->Manufacturer = "null";
}

Part::Part(string oem, string manufacturer, string description, int quantity, float price)
{
	this->OEM = oem;
	this->Manufacturer = manufacturer;
	this->Description = description;
	this->Quantity = quantity;
	this->Price = price;
}
Part::~Part()
{
}

void Part::print()
{
	cout << OEM << "\t" << Manufacturer << "\t" << Description << "\t" << Quantity << "\t" << Price << endl;
}