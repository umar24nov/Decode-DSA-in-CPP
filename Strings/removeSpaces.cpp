#include <bits/stdc++.h>
using namespace std;
int main (){
    string str;
    cout<<"Enter a string with spaces: ";
    getline(cin, str);
    cout<<"Your string is: "<<str<<endl;

    int n = str.length();
    string result = ""; // declaring an empty string

    for(int i =0; i < n; i++){
        if(str[i] == ' ') continue;
        else result += str[i];
    }
    cout<<"String after removing spaces: "<<result;
    return 0;
}