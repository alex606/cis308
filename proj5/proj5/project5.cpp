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
	Wheel Wheel_1(5, 2.25, "Hello", "oem", "ford", "hello world", 5, 7.25);
	Wheel Wheel_2(5, 2.25, "Hello", "oem", "ford", "hello world", 5, 7.25);
	Wheel Wheel_3(5, 2.25, "Hello", "oem", "ford", "hello world", 5, 7.25);
	Wheel Wheel_4(5, 2.25, "Hello", "oem", "ford", "hello world", 5, 7.25);

	Mirror Mirror_1("asdf", Mirror::StaticMirror, Mirror::Left, "oem", "manu", "Descript", 5, 3.34);
	Mirror Mirror_2("asdf", Mirror::StaticMirror, Mirror::Left, "oem", "manu", "Descript", 5, 3.34);
	Mirror Mirror_3("asdf", Mirror::StaticMirror, Mirror::Left, "oem", "manu", "Descript", 5, 3.34);
	Mirror Mirror_4("asdf", Mirror::StaticMirror, Mirror::Left, "oem", "manu", "Descript", 5, 3.34);

	Antenna Antenna_1("asdf", 2.23, "hello", "asdf", "asdf", "asdf", 2, 4.30);
	Antenna Antenna_2("asdf", 2.23, "hello", "asdf", "asdf", "asdf", 2, 4.30);
	Antenna Antenna_3("asdf", 2.23, "hello", "asdf", "asdf", "asdf", 2, 4.30);
	Antenna Antenna_4("asdf", 2.23, "hello", "asdf", "asdf", "asdf", 2, 4.30);

	Battery Battery_1("asdf", "asdf", 2, "asdf", "asdf", "asdf", 3, 5.43);
	Battery Battery_2("asdf", "asdf", 2, "asdf", "asdf", "asdf", 3, 5.43);
	Battery Battery_3("asdf", "asdf", 2, "asdf", "asdf", "asdf", 3, 5.43);
	Battery Battery_4("asdf", "asdf", 2, "asdf", "asdf", "asdf", 3, 5.43);

	

	Inventory inventory(Wheel_1);
	inventory.AddPart(Antenna_1);
	

	system("Pause");
	return 0;
}