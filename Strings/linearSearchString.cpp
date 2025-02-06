#include <bits/stdc++.h>
using namespace std;
int main (){
    string str = "MohammadUmar";
    int n = str.length();

    char ch;
    cout<<"Enter character you want to search: ";
    cin>>ch;

    int idx = -1;

    for(int i = 0; i < n; i++){
        if(str[i] == ch){
        idx = i;
        break;
        }
    }

    cout<<"Index is : "<<idx<<endl;
    return 0;
}