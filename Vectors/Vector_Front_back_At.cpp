#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<int> num = {1,2,5,9,7,3};

    cout<<num.front()<<endl; // Fetch first indexed value
    cout<<num.back()<<endl;  // Fetch last indexed value
    cout<<endl; 
    cout<<num.at(4)<<endl;   //  Fetch 4th indexed value
    cout<<num.at(3)<<endl;   //  Fetch 3th indexed value
    cout<<num.at(5)<<endl;   //  Fetch 5th indexed value
    cout<<num.at(1)<<endl;   //  Fetch 1th indexed value


    return 0;
}