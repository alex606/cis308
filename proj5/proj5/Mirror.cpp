#include "Mirror.h"


Mirror::Mirror(string yearModels, Mirror::MirrorType MT, Mirror::Side S,
	string O, string M, string D, int Q, float P) 
	: Part(O, M, D, Q, P)
{
	this->yearModels = yearModels;
	this->MirrorStyle = this->MirrorTypes[MT];
	this->MirrorSide = this->Sides[S];
}

Mirror::~Mirror()
{
}

// Used Mirror Type and price as a means to quantify tire quality
bool operator==(Mirror& m1, Mirror& m2)
{
	if (m1.MirrorStyle == m2.MirrorStyle && m1.Price == m2.Price)
	{
		return true;
	}
	else return false;
}
bool operator>(Mirror& m1, Mirror& m2)
{
	if (m1.MirrorStyle <= m2.MirrorStyle && m1.Price <= m2.Price)
	{
		return true;
	}
	else return false;
}
bool operator<(Mirror& m1, Mirror& m2)
{
	if (m1.MirrorStyle >= m2.MirrorStyle && m1.Price >= m2.Price)
	{
		return true;
	}
	else return false;
}