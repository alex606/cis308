/**********************************************
* Name: Alexander Wu							*
* Date: 12/12/2015								*
* Assignment: Project 5: Auto Parts				*
***********************************************
* C++ Inventory system for an AutoParts shop*
***********************************************/

#include "Antenna.h"

Antenna::Antenna(void) : Part()
{
	this->Type = "null";
	this->Size = 0.0;
	this->Material = "null";
}

Antenna::Antenna(string t, double s, string ma, string o, string m, int q, float p)
	:Part(o,m,q,p,Part::Antenna)
{
	this->Type = t;
	this->Size = s;
	this->Material = ma;
}

Antenna::~Antenna()
{
}

void Antenna::print()
{
	cout << OEM << "\t"
		<< Manufacturer << "\t"
		<< Type << " " <<  Size << " " << Material << "\t"
		<< Quantity << "\t$";

	cout << fixed;
	cout << setprecision(2);
	cout << Price << endl;
}

// Used price as a means to quantify quality
bool operator==(Antenna& a1, Antenna& a2)
{
	if (a1.Price == a2.Price)
	{
		return true;
	}
	else return false;
}
bool operator>(Antenna& a1, Antenna& a2)
{
	if (a1.Price > a2.Price)
	{
		return true;
	}
	else return false;
}
bool operator<(Antenna& a1, Antenna& a2)
{
	if (a1.Price < a2.Price)
	{
		return true;
	}
	else return false;
}