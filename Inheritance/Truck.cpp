#include "Truck.h"

Truck::Truck() : Vehicle::Vehicle()
{
	setTowingCapacity(100);
}
Truck::Truck(int t, int yr, std::string man) : Vehicle::Vehicle(yr, man)
{
	setTowingCapacity(t);
}
int Truck::getTowingCapacity()
{
	return towingCapacity;
}
void Truck::setTowingCapacity(int t)
{
	towingCapacity = t;
}
void Truck::displayInfo()
{
	Vehicle::displayInfo();
	std::cout << "Towing Capacity: " << towingCapacity << '\n';
}