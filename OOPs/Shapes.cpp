/* Create a base class "Shape" with methods to calculate the 
area and perimeter (pure virtual). Implement derived 
classes "Rectangle" and "Circle" that
inherit from "Shape" and provide their own 
area and perimeter calculations. */


#include <iostream>
using namespace std;
 class Shape{
    public: 
    virtual double area() const = 0;
    virtual double perimeter() const = 0;
};

class Rectangle : public Shape{
private:
    double length;
    double width;
public:
    Rectangle(double length, double width){
        this->length = length;
        this->width = width;
    }

    double area() const override{
        return length * width;
    }

    double perimeter() const override{
        return 2 * (length + width);
    }
};

class Circle : public Shape{
private:
    double radius;
    const double pi = 3.141592;
public: 
    Circle(double radius){
        this->radius = radius;
    }

    double area() const override{
        return pi * radius * radius;
    }

    double perimeter() const override{
        return 2 * pi * radius;
    }
};

int main(){
    Rectangle r(10,5);
    Circle c(5);
    cout<<"Area of Rectangle : "<<r.area()<<endl;
    cout<<"Perimeter of Rectangle : "<<r.perimeter()<<endl;
    cout<<"Area of Circle : "<<c.area()<<endl;
    cout<<"Circumference of Circle : "<<c.perimeter();

}