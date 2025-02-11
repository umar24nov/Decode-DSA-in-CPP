#include <bits/stdc++.h>
#include <string>
using namespace std;
int main (){
    string str1;
    cout<<"Enter First String: ";
    getline(cin, str1);

    string str2;
    cout<<"Enter Second String: ";
    getline(cin, str2);

    if(str1.empty() || str2.empty()){
        cout<<"Enter some String!";
        return 0;
    }
    
    if(str1.length() != str2.length()){
        cout<<"Strings are not Anagram!";
        return 0;
    }

    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());
    
    if(str1 == str2){
        cout<<"Strings are Anagram!";
    }
    else{
        cout<<"Strings are not Anagram!";
    }
    return 0;
}