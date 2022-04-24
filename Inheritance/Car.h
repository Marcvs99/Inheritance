#ifndef CAR
#define CAR
#include "Vehicle.h"
class Car :
    public Vehicle
{
private:
    int doors;
public:
    Car();
    Car(int d, int yr, std::string man);
    int getDoors();
    void setDoors(int d);
    void displayInfo();
};

#endif

