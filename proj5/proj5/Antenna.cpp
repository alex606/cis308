#include "Antenna.h"

Antenna::Antenna(void) : Part()
{
	this->Type = "null";
	this->Size = 0.0;
	this->Material = "null";
}

Antenna::Antenna(string t, double s, string ma, string o, string m, int q, float p)
	:Part(o,m,q,p,Part::Antenna)
{
	this->Type = t;
	this->Size = s;
	this->Material = ma;
}

Antenna::~Antenna()
{
}

// Used width and price as a means to quantify tire quality
bool operator==(Antenna& a1, Antenna& a2)
{
	if (a1.Price == a2.Price && a1.Size == a2.Size)
	{
		return true;
	}
	else return false;
}
bool operator>(Antenna& a1, Antenna& a2)
{
	if (a1.Price < a2.Price && a1.Size > a2.Size)
	{
		return true;
	}
	else return false;
}
bool operator<(Antenna& a1, Antenna& a2)
{
	if (a1.Price > a2.Price && a1.Size < a2.Size)
	{
		return true;
	}
	else return false;
}