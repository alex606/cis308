#ifndef ANTENNA_H
#define ANTENNA_H

#include "Part.h"


class Antenna : public Part
{
private:
	string Name = "Antenna";
	string Type;
	double Size;
	string Material;

public:
	Antenna();
	Antenna(string type, double size, string material, string oem, string manufacturer, string description, int quantity, float price);
	~Antenna();
};

#endif