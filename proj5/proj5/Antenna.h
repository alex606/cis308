/**********************************************
* Name: Alexander Wu							*
* Date: 12/12/2015								*
* Assignment: Project 5: Auto Parts				*
***********************************************
* C++ Inventory system for an AutoParts shop*
***********************************************/

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
	Antenna(string type, double size, string material, string oem, string manufacturer, int quantity, float price);
	~Antenna();

	void print();

	friend bool operator== (Antenna&, Antenna&);
	friend bool operator> (Antenna&, Antenna&);
	friend bool operator< (Antenna&, Antenna&);
};

#endif