// Copy Constructor

#include <iostream>
using namespace std;

class Student {
public:
   string name;
   int rollno;
   float gpa;

    Student (string s, int r, float g){ // Parameterised Constructors
    name = s;
    rollno = r;
    gpa = g;
   }
};


void print(Student s) {
    cout<<s.name<<" "<<s.rollno<<" "<<s.gpa<<endl;
}



int main(){

    Student s1("Umar",37,7.9);
    Student s2("Mustafa",8.2,45);


    Student s3 = s1; // Copy Constructor
    s3.name = "Abdullah"; // Deep Copy

    Student s4(s2); // Another way creating of copy constructor
    s4.rollno = 78; // Deep Copy


 

    print(s1);
    print(s2);
    print(s3);
    print(s4);
   
    

  
}