/**********************************************
* Name: Alexander Wu							*
* Date: 12/12/2015								*
* Assignment: Project 5: Auto Parts				*
***********************************************
* C++ Inventory system for an AutoParts shop*
***********************************************/

#ifndef PART_H
#define PART_H

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class Part
{

protected:
	string OEM;
	string Manufacturer;
	string Description;
	float Price;
	int Quantity;
	string Types[4];
	string PartType;


public:
	enum PartTypes
	{
		Wheel,
		Antenna,
		Battery,
		Mirror
	};

	Part(void);
	Part(string oem, string manufacturer, int quantity, float price, PartTypes pt);
	~Part();

	virtual void print();
	string GetName(); 
	static string GetType(PartTypes pt);

	friend bool operator== (Part&, Part&);
	friend bool operator> (Part&, Part&);
	friend bool operator< (Part&, Part&);

};

#endif