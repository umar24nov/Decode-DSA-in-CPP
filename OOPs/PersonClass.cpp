/* Create a class "Person" with a static member 
variable "count" that keeps track of the
 number of instances created.
 */
#include <iostream>
#include <string>
using namespace std;

class Person{
private:
    string name;
    static int count;
public:
    Person(string name){
        this->name = name;
        count++;
    }

    static int getCount(){
        return count;
    }

    string getName(){
        return name;
    }

    

};

int Person::count = 0;

int main(){

    Person p1("Umar");
    Person p2("Mustafa");

     cout<<"Total Persons : "<<Person::getCount() << endl;
     cout<<p1.getName()<<endl;
     cout<<p2.getName()<<endl;

    return 0;
}