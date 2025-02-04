#include <bits/stdc++.h>
using namespace std;
int main (){
    string str = "MALAYALAM";
    string temp = str;
    int n = str.length();
    for(int i = 0; i <= n/2; i++){
        swap(str[i],str[n-i-1]);
    }
    if(temp == str){
        cout<<"The string is palindrome. "<<endl;
    }
    else cout<<"The string is not palindrome. "<<endl;
    return 0;
}