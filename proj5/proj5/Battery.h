/**********************************************
* Name: Alexander Wu							*
* Date: 12/12/2015								*
* Assignment: Project 5: Auto Parts				*
***********************************************
* C++ Inventory system for an AutoParts shop*
***********************************************/

#ifndef BATTERY_H
#define BATTERY_H

#include "Part.h"

class Battery : public Part
{
private:
	string Type;
	string Cell;
	int Life;

public:
	Battery();
	Battery(string T, string C, int L, string oem, string manufacturer , int quantity, float price);
	~Battery();

	void print();

	friend bool operator== (Battery&, Battery&);
	friend bool operator> (Battery&, Battery&);
	friend bool operator< (Battery&, Battery&);

};

#endif