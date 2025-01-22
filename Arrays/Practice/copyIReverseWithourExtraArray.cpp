#include <bits/stdc++.h>
using namespace std;
int main (){
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);
    cout<<"Original vector : ";
    for(int num : v){
        cout<<num<< " ";
    }
    
    int i = 0;
    int j = v.size()-1;
        while(i <= j){
            swap(v[i],v[j]);
            i++;
            j--;
        }


    cout<<endl;

    cout<<"Reversed vector : ";
    for(int num : v){
        cout<<num<< " ";
    }
    return 0;
}