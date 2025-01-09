#include <iostream>
using namespace std;

class Student {
public:
   string name;
   int rollno;
   float gpa;

};

int main(){

    // Student Class object initiated

    // Student s1
    Student s1;
    s1.name = "Umar";
    s1.gpa = 7.9;
    s1.rollno = 37;
    cout<<s1.name<<"  "<<s1.rollno<<" "<<s1.gpa<<endl;
    cout<<"Enter rollno : ";
    cin>>s1.rollno; // Overriding rollno by user input

    // Student s2
    Student s2;
    s2.name = "Mustafa";
    s2.gpa = 8.2;
    s2.rollno = 45;

    // Printing Output
    cout<<s1.name<<"  "<<s1.rollno<<" "<<s1.gpa<<endl;
    cout<<s2.name<<"  "<<s2.rollno<<" "<<s2.gpa<<endl;

}