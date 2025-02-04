#include <bits/stdc++.h>
using namespace std;
int main (){
    string str = "Mohammad Umar";
    int n = str.length();
    int count = 0;
    char x = 'a';
    for(int i = 0; i <= n; i++){
        if(str[i] == x)
        count++;
    }
    cout<<"The occurence of "<<x<<" in "<< str <<" is "<<count<<" times!";
    return 0;
}