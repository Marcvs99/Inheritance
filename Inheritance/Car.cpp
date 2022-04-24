#include "Car.h"

Car::Car() : Vehicle::Vehicle()
{
	setDoors(2);
}
Car::Car(int d, int yr, std::string man) : Vehicle::Vehicle(yr, man)
{
	setDoors(d);
}
void Car::setDoors(int d)
{
	doors = d;
}
int Car::getDoors()
{
	return doors;
}
void Car::displayInfo()
{
	Vehicle::displayInfo();
	std::cout << "Number of Doors: " << doors << '\n';
}