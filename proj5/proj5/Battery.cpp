/**********************************************
* Name: Alexander Wu							*
* Date: 12/12/2015								*
* Assignment: Project 5: Auto Parts				*
***********************************************
* C++ Inventory system for an AutoParts shop*
***********************************************/

#include "Battery.h"
#include <iomanip>

Battery::Battery()
{
}

Battery::Battery(string T, string C, int L, 
	string O, string M, int Q, float P)
	: Part(O, M, Q, P,Part::Battery)
{
	this->Type = T;
	this->Cell = C;
	this->Life = L;
}

Battery::~Battery()
{
}

void Battery::print()
{
	cout << OEM << "\t"
		<< Manufacturer << "\t"
		<< Type << " " << Cell << " " << Life << "y" << "\t"
		<< Quantity << "\t$";

	cout << fixed;
	cout << setprecision(2);
	cout << Price << endl;
}

// Used price as a means to quantify quality
bool operator==(Battery& b1, Battery& b2)
{
	if (b1.Price == b2.Price)
	{
		return true;
	}
	else return false;
}
bool operator>(Battery& b1, Battery& b2)
{
	if (b1.Price > b2.Price)
	{
		return true;
	}
	else return false;
}
bool operator<(Battery& b1, Battery& b2)
{
	if (b1.Price < b2.Price)
	{
		return true;
	}
	else return false;
}