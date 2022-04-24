// Marcus King
// 4/24/2022
// CIS 1202.501

#include <iostream>
#include <string>
#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"

int main()
{
	int year = 0;
	std::string manufacturer = "";
	int doors = 0;
	int towingCapacity = 0;

	std::cout << "Enter year of manufacture" << '\n';

	std::cin >> year;

	std::cout << "Enter manufacturer" << '\n';

	std::cin.ignore(INT_MAX, '\n');
	std::cin.clear();

	std::getline(std::cin, manufacturer, '\n');

	Vehicle v1(year, manufacturer);
	v1.displayInfo();

	std::cout << '\n';


	std::cout << "Enter year of manufacture" << '\n';

	std::cin >> year;

	std::cout << "Enter manufacturer" << '\n';

	std::cin.ignore(INT_MAX, '\n');
	std::cin.clear();

	std::getline(std::cin, manufacturer, '\n');

	std::cout << "Enter number of doors" << '\n';

	std::cin >> doors;

	Car c1(doors, year, manufacturer);
	c1.displayInfo();

	std::cout << '\n';


	std::cout << "Enter year of manufacture" << '\n';

	std::cin >> year;

	std::cout << "Enter manufacturer" << '\n';

	std::cin.ignore(INT_MAX, '\n');
	std::cin.clear();

	std::getline(std::cin, manufacturer, '\n');

	std::cout << "Enter towing capacity" << '\n';

	std::cin >> towingCapacity;

	Truck t1(towingCapacity, year, manufacturer);
	t1.displayInfo();

	std::cout << '\n';
}