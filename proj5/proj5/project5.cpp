#include <iostream>
#include "Part.h"
#include "Wheel.h"
#include "Antenna.h"
#include "Battery.h"
#include "Mirror.h"
#include "Inventory.h"

using namespace std;

int main(void)
{
	Wheel testWheel(5, 2.25, "Hello","oem","ford","hello world",5,7.25);
	Wheel compareWheel(5, 2.25, "Hello", "oem", "ford", "hello world", 5, 7.30);

	testWheel.print();

	bool test = testWheel == compareWheel;
	bool test2 = testWheel > compareWheel;
	bool test3 = testWheel < compareWheel;
	cout << test << "   "  << test2 << "  " << test3 <<  endl;

	Mirror asdf("asdf", Mirror::StaticMirror, Mirror::Left, "oem", "manu", "Descript", 5,3.34);
	
	

	system("Pause");
	return 0;
}