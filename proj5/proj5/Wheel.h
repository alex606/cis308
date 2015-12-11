/**********************************************
* Name: Alexander Wu							*
* Date: 12/12/2015								*
* Assignment: Project 5: Auto Parts				*
***********************************************
* C++ Inventory system for an AutoParts shop*
***********************************************/

#ifndef WHEEL_H
#define WHEEL_H

#include "Part.h"

class Wheel : public Part
{
private:
	int Width;
	double AspectRatio;
	string RimSize;

public:
	Wheel(void);
	Wheel(int width, double aspectRatio, string rimSize, string oem, string manufacturer, int quantity, float price);
	~Wheel();
	
	void print();

	friend bool operator== (Wheel&, Wheel&);
	friend bool operator> (Wheel&, Wheel&);
	friend bool operator< (Wheel&, Wheel&);

};

#endif