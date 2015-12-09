#ifndef PART_H
#define PART_H

#include <iostream>
#include <string>

using namespace std;

class Part
{

protected:
	string OEM;
	string Manufacturer;
	string Description;
	float Price;
	int Quantity;


public:
	Part(void);
	Part(string oem, string manufacturer, string description, int quantity, float price);
	~Part();

	void print();
};

#endif