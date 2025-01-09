#include <iostream>
using namespace std;

class Cricketer{
public:
    string name;
    int runs;
    float avg;

    Cricketer(){ // Default Constructor

    }


    Cricketer(string name, int runs,float avg){ // Parameterised Constructor
        this->name  =  name;
        this->runs = runs;
        this->avg = avg;
    }
    
    // We can also initialize function inside class
    

};
void change(Cricketer* c){

        c->avg = 68.36; // (*c).avg = 77.2;

}

int main(){
    Cricketer c1("Virat Kohli",23000,52.6);

    // cout<<c1.avg<<endl;
    // change(&c1);
    // cout<<c1.avg<<endl;



    // Cricketer* p1 = &c1;
    // cout<<(*p1).runs<<endl; // c1.runs
    // cout<<c1.avg<<endl;
    // (*p1).avg = 55.67; // c1.avg = 55.67
    // cout<<c1.avg<<endl;


    // a - > b means (*a).b VVImp
    Cricketer* p1 = &c1;
    cout<<p1->runs<<endl; // c1.runs
    cout<<c1.avg<<endl;
    p1->avg = 55.67; // c1.avg = 55.67
    cout<<c1.avg<<endl;

}
