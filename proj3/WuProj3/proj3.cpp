/**********************************************
*	Name:	Alexander Wu						*
*	Date:	November 3, 2015					*
*	Assignment:	Project	4:	Fractions			*
***********************************************
*	program to take two input fractions and		*
*	an operation and output the result			*
***********************************************/

#include <iostream>
#include "fraction.h"
#include <cstdlib>
#include <string.h>
#include <string>
#include <cstring>
#include <algorithm>

using namespace std;

// Function used to reduce a given fraction
fraction reduce(fraction f)
{
	int min = std::min(f.numerator, f.denominator);
	int i;
	int num, den;

	for (i = 2; i <= min; i++)
	{
		if (f.numerator % i == 0 && f.denominator % i == 0)
		{
			f.numerator = f.numerator / i;
			f.denominator = f.denominator / i;
			min = std::min(f.numerator, f.denominator);
			i = 2;
		}
	}
	return f;
}

// function used to parse fraction inputs from user
void parseFraction(int *a, int *b)
{
	string s1;
	cin >> s1;
	int count = 0;
	while (count <= s1.length())
	{
		if (s1[count] == '/')
		{
			*a = stoi(s1.substr(0, count));
			*b = stoi(s1.substr(count + 1, s1.length() - (count + 1)));
		}
		count++;
	}
}

int main(void)
{
	int num1, num2, den1, den2;
	fraction a, b, c;

	cout << "Enter the first fraction (e.g. 9/5): ";
	parseFraction(&num1, &den1);
	cout << "Enter the second fraction (e.g. 9/5): ";
	parseFraction(&num2, &den2);

	char operation = 'a'; //dummy value

	cout << "Enter the operator (+, -, *, /): ";

	// print error message and exit if user enters invalid operation
	cin >> operation;
	if (operation != '*' && operation != '/' && operation != '+' && operation != '-')
	{
		cout << "ERROR, invali operation" << endl;
		return 0;
	}

	a.setValues(num1, den1);
	b.setValues(num2, den2);
	a = reduce(a);
	b = reduce(b);

	cout << a.numerator << '/' << a.denominator << operation << b.numerator << '/' << b.denominator << " = ";

	switch (operation)
	{
		case '+':
			c = a.plus(b);
			break;
		case '-':
 			c = a.minus(b);
			break;
		case '*':
			c = a.times(b);
			break;
		case '/':
			c = a.divide(b);
			break;
	}
	c.print();
	
	system("PAUSE");
	return 0;
}