#include "Antenna.h"


Antenna::Antenna(void) : Part()
{
	this->Type = "null";
	this->Size = 0.0;
	this->Material = "null";
}

Antenna::Antenna(string t, double s, string ma, string o, string m, string d, int q, float p)
	:Part(o,m,d,q,p)
{
	this->Type = t;
	this->Size = s;
	this->Material = ma;
}


Antenna::~Antenna()
{
}
