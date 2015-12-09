#include <iostream>
#include "Part.h"
#include "Wheel.h"



using namespace std;

int main(void)
{
	Wheel testWheel(5, 2.25, "Hello","oem","ford","hello world",5,2.25);
	
	testWheel.print();

	system("Pause");
	return 0;
}