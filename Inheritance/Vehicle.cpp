#include "Vehicle.h"

Vehicle::Vehicle()
{
	setYear(0);
	setManufacturer("");
}
Vehicle::Vehicle(int yr, std::string man)
{
	setYear(yr);
	setManufacturer(man);
}
int Vehicle:: getYear()
{
	return year;
}
std::string Vehicle::getManufacturer()
{
	return manufacturer;
}
void Vehicle::setYear(int yr)
{
	year = yr;
}
void Vehicle::setManufacturer(std::string str)
{
	manufacturer = str;
}
void Vehicle::displayInfo()
{
	std::cout << "Year Built: " << year << '\n';
	std::cout << "Manufacturer: " << manufacturer << '\n';
}