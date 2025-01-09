// This KeyWord

#include <iostream>
using namespace std;

class Cricketer{
public:
    string name;
    int runs;

    Cricketer(){ // Default Constructor

    }


    Cricketer(string name, int runs){ // Parameterised Constructor
        this->name  =  name;
        this->runs = runs;
    }
    
    // We can also initialize function inside class
    void print(){
    cout<<this->name<<" "<<this->runs<<endl;
}

};

int main(){
    Cricketer c1("Virat Kohli",23000);
    Cricketer c2("Sachin Tendulkar",34000);
   c1.print();
   c2.print();

}
