#include <iostream>
using namespace std;

class Cricketer{
public:
    string name;
    int runs;
    float avg;

    Cricketer(string name, int runs,float avg){ // Parameterised Constructor
        this->name  =  name;
        this->runs = runs;
        this->avg = avg;
    }
};

int main(){
    int* ptr = new int(5463);
    cout<<*ptr<<endl;

    Cricketer c1("Virat Kohli",23000,55.6);
    Cricketer* c2 = new Cricketer("Sachin Tendulkar",34000,61.26);
    

    cout<<c1.name<<" "<<c1.runs<<endl;
    cout<<c2->avg<<" "<<c2->runs<<endl;


}
