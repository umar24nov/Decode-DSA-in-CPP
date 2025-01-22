#include <iostream>
using namespace std;
int main (){
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target;
    cout<<"Enter target element : ";
    cin>>target;
    bool flag = false;
    for(int i = 0; i < n; i++){
        if(arr[i] == target) flag = true;
    }
    if(flag == true) cout<<"Element is present!";
    else cout<<"404 Element is not present!";
    return 0;
}