#include <iostream>
#include <stack>
using namespace std;
int main(){
    int arr[] = {3,1,2,7,4,6,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0; i < n; i++ ){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int nextGreater[n];

    // Brute Force : TC = O(n^2), SC = O(1)
    for(int i = 0; i < n; i++){
        nextGreater[i] = -1;
        for(int j = i+1; j < n; j++){
            if(arr[j] > arr[i]){
                nextGreater[i] = arr[j];
                break;
            }
        }
    }
    for(int i = 0; i < n; i++ ){
        cout<<nextGreater[i]<<" ";
    }
    return 0;
}