/**********************************************
* Name: Alexander Wu							*
* Date: 12/12/2015								*
* Assignment: Project 5: Auto Parts				*
***********************************************
* C++ Inventory system for an AutoParts shop*
***********************************************/

#ifndef MIRROR_H
#define MIRROR_H

#include "Part.h"

class Mirror : public Part
{
private:
	string yearModels;
	string MirrorTypes[2];
	string Sides[2];
	string MirrorStyle;
	string MirrorSide;

public:
	enum MirrorType
	{
		StaticMirror,
		ElectricMirror
	};
	enum Side
	{
		Left,
		Right
	};

	Mirror();
	Mirror(string YM, MirrorType MY, Side S, string oem, string manufacturer, 
		int quantity, float price);
	~Mirror();

	void print();

	friend bool operator== (Mirror&, Mirror&);
	friend bool operator> (Mirror&, Mirror&);
	friend bool operator< (Mirror&, Mirror&);

};

#endif