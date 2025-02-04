#include <bits/stdc++.h>
using namespace std;
int main (){
    string str1;
    cout<<"Enter First String: ";
    cin>>str1;

    string str2;
    cout<<"Enter Second String: ";
    cin>>str2;

    if(str1 == str2){
        cout<<"Strings are equal!";
    }
    
    // can also use .compare method
    if(str1.compare(str2) == 0){
        cout<<"Strings are equal!";
    }
    
    else{
        cout<<"Strings are not equal!";
    }
    return 0;
}