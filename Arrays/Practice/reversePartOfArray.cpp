#include <bits/stdc++.h>
using namespace std;

void displayArray(vector<int>& q){
    for(int num : q){
        cout<<num<<" ";
    }
    cout<<endl;
}

void reverseArrayPart(vector<int>& v,int i,int j){
    while(i <= j){
        swap(v[i],v[j]);
        i++;
        j--;
    }
    return;
}
int main (){
    vector<int> v;
    v.push_back(10); // 0
    v.push_back(20); // 1
    v.push_back(30); // 2
    v.push_back(40); // 3
    v.push_back(50); // 4
    cout<<"Original Array : ";
    displayArray(v);
    reverseArrayPart(v,2,4);
    cout<<"Array after reversed part : ";
    displayArray(v);
    

    
    return 0;
}