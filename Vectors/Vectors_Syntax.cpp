#include <iostream>
#include <vector>
using namespace std;

int main(){


    // Vectors Intialization and declaration
    vector<int> num = {1,2,3};
    vector<char> v = {'a','b','c','d','e'};
    
    // Printing elements of vector using for each loop
    for(char val : v) { // for each loop
        cout << val << endl;
    }
    cout<<endl;
    for(int val : num) {
        cout << val << endl;
    }
    return 0;
}