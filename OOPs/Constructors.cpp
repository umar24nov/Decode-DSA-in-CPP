#include <iostream>
using namespace std;

class Student {
public:
   string name;
   int rollno;
   float gpa;
   // Default constructor
   // We must declare this as we initialized s2 manually
   Student() {

   }
   Student (string s){ // Parameterised Constructors
    name = s;
   }
    Student (string s, int r){ // Parameterised Constructors
    name = s;
    rollno = r;
   }
    Student (string s, int r, float g){ // Parameterised Constructors
    name = s;
    rollno = r;
    gpa = g;
   }

   Student (int r, float g,string s){ // Parameterised Constructors
    name = s;
    rollno = r;
    gpa = g;
   }
};

void print(Student s) {
    cout<<s.name<<" "<<s.rollno<<" "<<s.gpa<<endl;
}
int main(){
    // Student s1 initializing by constructor
    Student s1("Umar",37,7.9);
    // Student s2 intiating manually
    Student s2;
    s2.name = "Mustafa";
    s2.gpa = 8.2;
    s2.rollno = 45;
    // Student s3 initializing by constructor
    Student s3("Abdullah",11); 
    s3.gpa = 7.7; // gpa initializing manuallly
    // Student s3 initializing by constructor
    Student s4("Ayaan");
    s4.gpa = 6.6; // gpa initializing manuallly
    s4.rollno = 39; // rollno initializing manuallly
    // Student s5 initializing by constructor
    Student s5(8,7.3,"Amir");
    
    print(s1);
    print(s2);
    print(s3);
    print(s4);
    print(s5);
}