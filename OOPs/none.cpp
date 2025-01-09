/* Create a base class "Shape" with methods to calculate the 
area and perimeter (pure virtual). Implement derived 
classes "Rectangle" and "Circle" that
inherit from "Shape" and provide their own 
area and perimeter calculations. */


#include <iostream>
using namespace std;
 class Shape{

//     float length;
//     float breadth;
//     float radius;
//     float pi = 3.1415;
    public: 
    virtual double area();
    virtual double perimeter();
};

// class  Rectangle : public Shape{
// public:  
//     int areaOfRectangle(float len, float bre){
//         area  = len * bre;
//         return area;
//     } 

//     int perimeterOfRectangle(float len, float bre){
//         perimeter  = len * bre;
//         return perimeter;
//     }
// };

// class Circle : public Shape{
// public: 
//     int areaOfCircle(float rad){
//         area  = rad * rad;
//         return area;
//     }
// };


// int main(){
//     Shape s(4,5,3);
//     s.area();
// }