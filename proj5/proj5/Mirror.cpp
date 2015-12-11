/**********************************************
* Name: Alexander Wu							*
* Date: 12/12/2015								*
* Assignment: Project 5: Auto Parts				*
***********************************************
* C++ Inventory system for an AutoParts shop*
***********************************************/

#include "Mirror.h"

Mirror::Mirror(string yearModels, Mirror::MirrorType MT, Mirror::Side S,
	string O, string M,int Q, float P) 
	: Part(O, M, Q, P,Part::Mirror)
{
	this->MirrorTypes[0] = "Static";
	this->MirrorTypes[1] = "Electric";

	this->yearModels = yearModels;
	this->MirrorStyle = this->MirrorTypes[MT];
	this->MirrorSide = this->Sides[S];
}

Mirror::~Mirror()
{
}

void Mirror::print()
{
	cout << OEM << "\t"
		<< Manufacturer << "\t"
		<< MirrorSide << " " << MirrorStyle << " " << yearModels << "\t"
		<< Quantity << "\t$";

	cout << fixed;
	cout << setprecision(2);
	cout << Price << endl;
}

// Used Mirror Type and price as a means to quantify quality
bool operator==(Mirror& m1, Mirror& m2)
{
	if (m1.Price == m2.Price)
	{
		return true;
	}
	else return false;
}
bool operator>(Mirror& m1, Mirror& m2)
{
	if (m1.Price > m2.Price)
	{
		return true;
	}
	else return false;
}
bool operator<(Mirror& m1, Mirror& m2)
{
	if (m1.Price < m2.Price)
	{
		return true;
	}
	else return false;
}