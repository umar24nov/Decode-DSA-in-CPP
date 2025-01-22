#include <iostream>
using namespace std;
int main (){
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target;
    cout<<"Enter target element : ";
    cin>>target;
    int count = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] > target)
        count++;
    }
    cout<<"Number of elements greater than "<<target<<" is "<<count;
    return 0;
}