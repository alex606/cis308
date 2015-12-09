#ifndef PART_H
#define PART_H

#include <string>

using namespace std;

class Part
{
private:
	
	string OEM;
	string Manufacturer;

public:
	Part(string oem, string manufacturer);
	~Part();

	void print();
};

#endif