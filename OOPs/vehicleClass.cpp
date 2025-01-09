#include <iostream>
using namespace std;
class Vehicle{
public:
    int topSpeed;
    float mileage;
    string fuel;
private int bootSpace;
};
class Car : public Vehicle{ // Child class : Derived Class
public: 
    bool sunroof;
};
class Bike : public Vehicle{ // Child class : Derived Class
public:
};
class truck : public Vehicle{ // Child class : Derived Class
public:
};

int main(){
    Bike b1;
    b1.topSpeed = 90;
    b1.mileage = 13;
    b1.gears = 5;
    
}