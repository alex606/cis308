#ifndef MIRROR_H
#define MIRROR_H

#include "Part.h"

class Mirror : public Part
{
private:
	string Name = "Mirror";
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
		string description, int quantity, float price);
	~Mirror();

	

	friend bool operator== (Mirror&, Mirror&);
	friend bool operator> (Mirror&, Mirror&);
	friend bool operator< (Mirror&, Mirror&);

};

#endif