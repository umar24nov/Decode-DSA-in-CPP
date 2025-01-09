#include <iostream>
using namespace std;

// car Class

class Car {
public:
   string name;
   int price;
   int seats;
   string type;
};

void print(Car c) {
    cout<<c.name<<" "<<c.price<<" "<<c.seats<<" "<<c.type<<endl;
}

void change(Car &c){
    c.name = "Bentley";
}


int main(){
    // Car Class object initiated
    Car c1;
    c1.name = "Mustang";
    c1.price = 500000000;
    c1.seats = 2;
    c1.type = "Sedan";
    

    Car c2;
    c2.name = "Rolls Royce";
    c2.price = 250000000;
    c2.seats = 4;
    c2.type = "SUV";
    

    Car c3;
    c3.name = "Aston martin";
    c3.price = 100000000;
    c3.seats = 4;
    c3.type = "Sedan";

    // Intead of writing all of this we can print through function

    // cout<<c1.name<<" "<<c1.price<<" "<<c1.seats<<" "<<c1.type<<endl;
    // cout<<c2.name<<" "<<c2.price<<" "<<c2.seats<<" "<<c2.type<<endl;
    // cout<<c3.name<<" "<<c3.price<<" "<<c3.seats<<" "<<c3.type<<endl;
    // print(c1);
    // print(c2);
    // print(c3);

    print(c1);
    change(c1); // Pass by value
    print(c1);
}