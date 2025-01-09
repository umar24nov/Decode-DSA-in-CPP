#include <iostream>
#include <vector>
using namespace std;

int main(){
    // Vector Intialization and declaration
    vector<char> vec = {'a','b','c'};

    vector<int> num = {3,5,2,7,8,5,9};
   
    // Inbuilt function to calculate size 
    cout<<"Size of character vector : "<< vec.size()<<endl;
    cout<<"Size of integer vector : "<< num.size()<<endl;

    
    num.push_back(0);
    cout<<num.capacity();
    return 0;
}