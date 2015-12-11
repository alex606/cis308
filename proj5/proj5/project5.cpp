/**********************************************
* Name: Alexander Wu							*
* Date: 12/12/2015								*
* Assignment: Project 5: Auto Parts				*
***********************************************
* C++ Inventory system for an AutoParts shop*
***********************************************/

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
	// I don't know much about tires, mirrors, antennas, or batteries, but here's all the parts I hard-coded
	// Wheels : size, width, aspect Ratiom, rim size, OEM, Manufacturer, Quantity, Price
	Wheel Wheel_1(5, 2.25, "225/70R14", "GMC2012", "FordAndGuys",  2, 140);
	Wheel Wheel_2(6, 3.45, "230/65L15", "FMM2005", "GeneralMotors",  3, 190);
	Wheel Wheel_3(7, 4.65, "235/70C16", "GMC2014", "GoodTire",  4, 150);
	Wheel Wheel_4(8, 7.25, "240/70M17", "FMM2007", "AfterMarket",  5, 150);

	// Mirrors : "Year compatability, Type :static or Electric, Side : Left or Right, OEM, Manufacturer, quantity, price
	// (note: I did enums for only the mirrors to show that I can implement them)
	Mirror Mirror_1("Original", Mirror::StaticMirror, Mirror::Left, "GMC2012", "FordAndGuys",  5, 13.34);
	Mirror Mirror_2("Original", Mirror::ElectricMirror, Mirror::Left, "FMM2005", "GeneralMotors",  4, 31.34);
	Mirror Mirror_3("Compatible", Mirror::StaticMirror, Mirror::Right, "GMC2014", "GoodMirror",  4, 33.34);
	Mirror Mirror_4("Compatible", Mirror::ElectricMirror, Mirror::Right, "FMM2007", "AfterMarket", 5, 33.34);


	// Antennas : Type : Simple or Electric, size in inches, material, OEM, Manufacturer, quantity, price
	Antenna Antenna_1("Simple", 2.23, "metal", "GMC2012", "FordAndGuys", 2, 4.30);
	Antenna Antenna_2("Electric", 2.23, "metal", "FMM2005", "GeneralMotors", 2, 10.25);
	Antenna Antenna_3("Simple", 2.23, "fiberglass", "GMC2014", "GoodAntenna", 2, 15.50);
	Antenna Antenna_4("Electric", 2.23, "fiberglass", "FMM2007", "AfterMarket", 2, 2.25);

	// Batteries : Type: SLI or DC, Cell : Wet or Dry Cell, Life, OEM, Manufacturer, quantity, price
	Battery Battery_1("SLI", "Wet Cell", 2, "GMC2012", "FordAndGuys", 3, 200);
	Battery Battery_2("SLI", "Wet Cell", 2, "GMC2014", "GeneralMotors", 3, 210);
	Battery Battery_3("DC", "Dry Cell", 2, "GMC2014", "GoodBattery", 3, 260);
	Battery Battery_4("DC", "Dry Cell", 2, "FMM2007", "AfterMarket", 3, 250);

	// Created 4 of each componenent and stored them in Inventory data structure
	Inventory inventory;

	inventory.AddWheel(Wheel_1);
	inventory.AddWheel(Wheel_2);
	inventory.AddWheel(Wheel_3);
	inventory.AddWheel(Wheel_4);

	inventory.AddMirror(Mirror_1);
	inventory.AddMirror(Mirror_2);
	inventory.AddMirror(Mirror_3);
	inventory.AddMirror(Mirror_4);

	inventory.AdddAntenna(Antenna_1);
	inventory.AdddAntenna(Antenna_2);
	inventory.AdddAntenna(Antenna_3);
	inventory.AdddAntenna(Antenna_4);

	inventory.AddBattery(Battery_1);
	inventory.AddBattery(Battery_2);
	inventory.AddBattery(Battery_3);
	inventory.AddBattery(Battery_4);

	// Prints each part listed in inventory
	inventory.PrintInventory();

	// Prints List of each specific component
	inventory.PrintByPart(Part::Wheel);
	inventory.PrintByPart(Part::Mirror);
	inventory.PrintByPart(Part::Antenna);
	inventory.PrintByPart(Part::Battery);

	system("Pause");
	return 0;
}