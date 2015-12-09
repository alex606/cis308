#include "Wheel.h"
#include "Part.h"
#include <iostream>
#include <string>

Wheel::Wheel()
{
}

Wheel::Wheel(int W, double AR, string RS, string O, string M, string D, int Q, float P) 
	: Part(O,M,D,Q,P)
{
	this->Width = W;
	this->AspectRatio = AR;
	this->RimSize = RS;
}

Wheel::~Wheel()
{
}
