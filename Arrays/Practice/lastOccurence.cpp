#include <iostream>
#include <vector>
using namespace std;
int main (){
    vector<int> v;
    v.push_back(2);
    v.push_back(5);
    v.push_back(3);
    v.push_back(4);
    v.push_back(2);
    v.push_back(7);
    v.push_back(9);
    v.push_back(5);
    for(int num : v){
        cout<<num<<" ";
    }
    cout<<endl;

    int target;
    cout<<"Enter element you want to search : ";
    cin>>target;
    int idx = -1;
    for(int i = 0; i < v.size(); i++){
        if(v[i] == target) idx = i;
    }
    if(idx != -1) cout<<"Last occurence of "<<target<<" found at index "<<idx;
    else cout<<"Element is not present in array!";
    return 0;
}