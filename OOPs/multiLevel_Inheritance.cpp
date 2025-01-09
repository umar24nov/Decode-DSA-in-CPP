#include <iostream>
using namespace std;
class Vehicle{
public:
    int topSpeed;
    float mileage;
    string fuel;
    int gears;
private :  
    int bootSpace;
};
class TwoWheeler : public Vehicle{ // Child class : Derived Class
public: 
    bool sunroof;
};
class Scooty : public TwoWheeler{ // Child class : Derived Class
public: 
    bool sunroof;
};
class Bike : public TwoWheeler{ // Child class : Derived Class
public: 
    bool sunroof;
};
int main(){
    Bike b1;
    b1.topSpeed = 90;
    b1.mileage = 13;
    b1.gears = 5;
    
}