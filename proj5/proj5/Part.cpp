#include "Part.h"
#include <iostream>
#include <string>


Part::Part(string oem, string manufacturer)
{
	this->OEM = oem;
	this->Manufacturer = manufacturer;
}
Part::~Part()
{
}

void Part::print()
{
	std::cout << OEM << "\t" << Manufacturer << std::endl;
}