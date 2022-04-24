#ifndef VEHICLE
#define VEHICLE
#include <string>
#include <iostream>

class Vehicle
{
private:
	std::string manufacturer = "";
	int year = 0;
public:
	Vehicle();
	Vehicle(int yr, std::string man);
	int getYear();
	std::string getManufacturer();
	void setYear(int yr);
	void setManufacturer(std::string str);
	void displayInfo();
};

#endif