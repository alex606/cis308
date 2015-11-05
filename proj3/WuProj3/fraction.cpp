#include <iostream>
#include "fraction.h"
#include <algorithm>


using namespace std;

fraction::fraction()
{
}


void fraction::setValues(int num, int den)
{
	numerator = num;
	denominator = den;
}

fraction fraction::plus(fraction f)
{
	fraction temp;

	if (denominator == f.denominator)
	{
		temp.setValues(numerator + f.numerator, denominator);
	}
	else
	{
		int lcd = denominator * f.denominator;
		int lnum = numerator * f.denominator + f.numerator * denominator;
		temp.setValues(lnum, lcd);
	}
	return temp;
}

fraction fraction::minus(fraction f)
{
	fraction temp;
	if (denominator == f.denominator)
	{
		temp.setValues(numerator - f.numerator, denominator);
	}
	else
	{
		int lcd = denominator * f.denominator;
		int lnum = numerator * f.denominator - f.numerator * denominator;
		temp.setValues(lnum, lcd);
	}
	return temp;
}

fraction fraction::times(fraction f)
{
	fraction temp;
	temp.setValues(numerator*f.numerator, denominator * f.denominator);
	return temp;
}

fraction fraction::divide(fraction f)
{
	fraction temp;
	temp.setValues(numerator*f.denominator, denominator * f.numerator);
	return temp;
}

void fraction::print()
{
	int min = std::min(numerator, denominator);
	int i;

	for (i = 2; i <= min; i++)
	{
		if (numerator % i == 0 && denominator % i == 0)
		{
			numerator = numerator / i;
			denominator = denominator / i;
			min = std::min(numerator, denominator);
			i = 2;
		}
	}
	cout << numerator << "/" << denominator << endl;
	
}

fraction::~fraction()
{
}
