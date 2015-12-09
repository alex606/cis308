#ifndef WHEEL_H
#define WHEEL_H

#include "Part.h"


class Wheel : public Part
{
protected:
	string Name = "Wheel";
	int Width;
	double AspectRatio;
	string RimSize;

public:
	Wheel(void);
	Wheel(int width, double aspectRatio, string rimSize, string oem, string manufacturer, string description, int quantity, float price);
	~Wheel();
};

#endif