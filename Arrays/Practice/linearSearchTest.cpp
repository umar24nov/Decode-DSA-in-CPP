#include <bits/stdc++.h>
using namespace std;

int linearSearch(vector<int> &arr, int target){
    int n = arr.size();
    for(int i = 0; i < n; i++){
        if(arr[i] == target){
            return i;
        }
    }
    return -1;
}

int main (){
    vector<int> arr = {1,2,3,4,5,6,7,8,9};
    int n = arr.size();
    int target;
    cout<<"Enter target element you want to search: ";
    cin>>target;
    int index = linearSearch(arr,target);
    if(index != -1){
        cout<<"Element "<<target<<" found at index "<<index; 
    }
    else{
        cout<<"Element "<<target<<" doesn't found in the array!";
    }
    return 0;
}