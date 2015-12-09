#include "Wheel.h"
#include "Part.h"


Wheel::Wheel() : Part()
{
	this->Width = 0;
	this->AspectRatio = 0.0;
	this->RimSize = "null";
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

bool operator==(Wheel& w1, Wheel& w2)
{
	
	return false;
}