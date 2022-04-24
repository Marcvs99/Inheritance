#ifndef TRUCK
#define TRUCK
#include "Vehicle.h"
class Truck :
    public Vehicle
{
private:
    int towingCapacity;
public:
    Truck();
    Truck(int t, int yr, std::string man);
    int getTowingCapacity();
    void setTowingCapacity(int t);
    void displayInfo();
};

#endif

