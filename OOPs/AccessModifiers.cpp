#include <iostream>
using namespace std;

class Student{
public:
    string name;
    int rollno;

    void display(){
        cout<<name<<" "<<marks<<" "<<rollno;
    }

    Student ( string name, float marks,int rollno){
        this->name = name;
        this->marks = marks;
        this->rollno = rollno;
    }

    float getMarks(){
        return marks;
    }

    void setMarks(float m){
        marks = m;
    }

private:
    float marks;
};

int main(){
    Student s1("Mohammad Umar",77.7,37);
    cout<<endl;
    // cout<<s1.getMarks()<<" ";
    s1.setMarks(88.8);
    s1.display();
   

}