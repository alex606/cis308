#include "Part.h"
#include <iomanip>

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
		<< Quantity << "\t$";

	cout << fixed;
	cout << setprecision(2);
	cout << Price << endl;
}

string Part::GetName()
{
	return PartType;
}

string Part::GetType(Part::PartTypes pt)
{
	switch (pt)
	{
	case Part::Wheel:
		return "Wheel";
		break;
	case Part::Antenna:
		return "Antenna";
		break;
	case Part::Battery:
		return "Battery";
		break;
	case Part::Mirror:
		return "Mirror";
		break;
	}
}

// Used price as a way to compare parts
bool operator==(Part& p1, Part& p2)
{
	if (p1.Price == p2.Price)
	{
		return true;
	}
	else return false;
}
bool operator>(Part& p1, Part& p2)
{
	if (p1.Price > p2.Price)
	{
		return true;
	}
	else return false;
}
bool operator<(Part& p1, Part& p2)
{
	if (p1.Price < p2.Price)
	{
		return true;
	}
	else return false;
}