/**********************************************
* Name: Alexander Wu							*
* Date: 12/12/2015								*
* Assignment: Project 5: Auto Parts				*
***********************************************
* C++ Inventory system for an AutoParts shop*
***********************************************/


#include "Wheel.h"
#include "Part.h"
#include <iomanip>

Wheel::Wheel() : Part()
{
	this->Width = 0;
	this->AspectRatio = 0.0;
	this->RimSize = "null";
}

Wheel::Wheel(int W, double AR, string RS, string O, string M,int Q, float P) 
	: Part(O,M,Q,P,Part::Wheel)
{
	this->Width = W;
	this->AspectRatio = AR;
	this->RimSize = RS;
}

Wheel::~Wheel()
{
}

void Wheel::print()
{
	cout << OEM << "\t"
		<< Manufacturer << "\t"
		<< RimSize << " " << AspectRatio << " " << Width << "\t"
		<< Quantity << "\t$";

	cout << fixed;
	cout << setprecision(2);
	cout << Price << endl;

}

// Used price as a means to quantify quality
bool operator==(Wheel& w1, Wheel& w2)
{
	if (w1.Price == w2.Price)
	{
		return true;
	}
	else return false;
}
bool operator>(Wheel& w1, Wheel& w2)
{
	if (w1.Price > w2.Price)
	{
		return true;
	}
	else return false;
}
bool operator<(Wheel& w1, Wheel& w2)
{
	if (w1.Price < w2.Price)
	{
		return true;
	}
	else return false;
}