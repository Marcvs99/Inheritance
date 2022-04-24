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
	Car v1;
	
	v1.displayInfo();

	Truck t1;
	Truck t2(200, 1999, "Ford");
	t1.displayInfo();
	t2.displayInfo();
}