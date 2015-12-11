#include "Battery.h"


Battery::Battery()
{
}

Battery::Battery(string T, string C, int L, 
	string O, string M, string D, int Q, float P)
	: Part(O, M, D, Q, P)
{
	this->Type = T;
	this->Cell = C;
	this->Life = L;
}


Battery::~Battery()
{
}

// Used Life and price as a means to quantify tire quality
bool operator==(Battery& b1, Battery& b2)
{
	if (b1.Price == b2.Price && b1.Life == b2.Life)
	{
		return true;
	}
	else return false;
}
bool operator>(Battery& b1, Battery& b2)
{
	if (b1.Price <= b2.Price && b1.Life >= b2.Life)
	{
		return true;
	}
	else return false;
}
bool operator<(Battery& b1, Battery& b2)
{
	if (b1.Price >= b2.Price && b1.Life <= b2.Life)
	{
		return true;
	}
	else return false;
}