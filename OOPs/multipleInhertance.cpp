#include <iostream>
using namespace std;
class Cricketer{
public:
    int runs;
    float wickets;
    string average;
};
class Engineer{
public:
    int experience;
    string doamin;
};
class Phodu : public Engineer,Cricketer{ // Multiple Inheritance
public:
    string name;
};
int main(){
     
}