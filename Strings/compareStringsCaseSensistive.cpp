#include <iostream>
#include <string>
#include <algorithm> // For transform()
using namespace std;

string toLowerCase(string str){
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    return str;
}

int main(){
    string str1 = "Hello";
    string str2 = "hello";

    if (toLowerCase(str1) == toLowerCase(str2)){
        cout << "Strings are equal (case-insensitive)." << endl;
    }
    else{
        cout << "Strings are NOT equal (case-insensitive)." << endl;
    }

    return 0;
}
