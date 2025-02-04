// Convert a string to lowercase without using library functions

#include <bits/stdc++.h>
using namespace std;

string toLowercase(string str){
    for(int i = 0; i < str.length(); i++){
        if(str[i] >= 'A' and str[i] <= 'Z'){
            str[i] = str[i] + 32;
        }
    }
    return str;
}

string toUppercase(string str){
    for(int i = 0; i < str.length(); i++){
        if(str[i] >= 'a' and str[i] <= 'z'){
            str[i] = str[i] - 32;
        }
    }
    return str;
}
int main (){
    string str;
    cout<<"Enter string:" ;
    cin>>str; 

    string str1 = toLowercase(str);

    string str2 = toUppercase(str);
    
    cout<<"Your string in LowerCase is: "<<str1;
    cout<<"Your string in UpperCase is: "<<str2;
    return 0;
}