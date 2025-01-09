#include <iostream>
using namespace std;

// Parent Class
class Scooty{
public:
    int topSpeed;
    float mileage;
private int bootSpace;
};

//Child Class inheriting property of parent class
class Bike : public Scooty{ //Always use public keyword
public:
    int gears;
};

int main(){
    Bike b1;
    b1.gears = 4;
    // We can even set this using inheritance by extending(:)
    b1.topSpeed = 90;
    cout<<b1.gears<<" "<<b1.topSpeed;
    
    // Can't do this thing as it is private
    // b1.bootSpace = 8;
}