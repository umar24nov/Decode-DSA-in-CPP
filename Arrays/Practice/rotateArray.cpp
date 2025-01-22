#include <bits/stdc++.h>
using namespace std;

void display(vector<int>& v){
    for(int num : v){
        cout<<num<<" ";
    }
    cout<<endl;
    return;
}

void reversePart(int i, int j, vector<int>& v){
    while(i <= j){
        swap(v[i], v[j]);
        i++;
        j--;
    }
    return;
}

// 10,20,30,40,50
// 50,40,10,20,30
int main (){
    vector<int> v = {10,20,30,40,50};
    int n = v.size();
    int k;
    k = k % n;

    cout<<"Enter steps you want to rotate : ";
    cin>>k;

    display(v);
    reversePart(0, n-k-1, v);
    reversePart(n-k, n-1, v);
    reversePart(0, n-1, v);
    display(v);
    return 0;
}