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
	// I don't know much about tires, mirrors, antennas, or batteries
	Wheel Wheel_1(5, 2.25, "225/70R14", "GMC2012", "FordAndGuys",  2, 140);
	Wheel Wheel_2(6, 3.45, "230/65L15", "FMM2005", "GeneralMotors",  3, 190);
	Wheel Wheel_3(7, 4.65, "235/70C16", "GMC2014", "GoodTire",  4, 150);
	Wheel Wheel_4(8, 7.25, "240/70M17", "FMM2007", "AfterMarket",  5, 150);

	Mirror Mirror_1("Original", Mirror::StaticMirror, Mirror::Left, "GMC2012", "FordAndGuys",  5, 13.34);
	Mirror Mirror_2("Original", Mirror::ElectricMirror, Mirror::Left, "FMM2005", "GeneralMotors",  4, 31.34);
	Mirror Mirror_3("Compatible", Mirror::StaticMirror, Mirror::Right, "GMC2014", "GoodMirror",  4, 33.34);
	Mirror Mirror_4("Compatible", Mirror::ElectricMirror, Mirror::Right, "FMM2007", "AfterMarket", 5, 33.34);

	Antenna Antenna_1("Simple", 2.23, "metal", "GMC2012", "FordAndGuys", 2, 4.30);
	Antenna Antenna_2("Electric", 2.23, "metal", "FMM2005", "GeneralMotors", 2, 4.30);
	Antenna Antenna_3("Simple", 2.23, "fiberglass", "GMC2014", "GoodAntenna", 2, 4.30);
	Antenna Antenna_4("Electric", 2.23, "fiberglass", "FMM2007", "AfterMarket", 2, 4.30);

	Battery Battery_1("SLI", "Wet Cell", 2, "GMC2012", "FordAndGuys", 3, 5.43);
	Battery Battery_2("SLI", "Wet Cell", 2, "GMC2014", "GeneralMotors", 3, 5.43);
	Battery Battery_3("DC", "Dry Cell", 2, "GMC2014", "GoodBattery", 3, 5.43);
	Battery Battery_4("DC", "Dry Cell", 2, "FMM2007", "AfterMarket", 3, 5.43);

	Inventory inventory;

	inventory.AddPart(Wheel_1);
	inventory.AddPart(Wheel_2);
	inventory.AddPart(Wheel_3);
	inventory.AddPart(Wheel_4);

	inventory.AddPart(Mirror_1);
	inventory.AddPart(Mirror_2);
	inventory.AddPart(Mirror_3);
	inventory.AddPart(Mirror_4);

	inventory.AddPart(Antenna_1);
	inventory.AddPart(Antenna_2);
	inventory.AddPart(Antenna_3);
	inventory.AddPart(Antenna_4);

	inventory.AddPart(Battery_1);
	inventory.AddPart(Battery_2);
	inventory.AddPart(Battery_3);
	inventory.AddPart(Battery_4);


	inventory.PrintInventory();

	system("Pause");
	return 0;
}