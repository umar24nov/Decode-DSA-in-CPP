#include <iostream>
using namespace std;
int main () {
    int arr[] = {5,4,6,3,15,2,1,-5,-3,0,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < n; i++) {
        cout<<arr[i]<<" ";
    }
    //bubble sort
    for (int i = 0; i < n-1; i++) {  // n-1 passes
        //  traversal
        for ( int j = 0; j < n-1-i; j++) { // to avoid extra comparison we use n-1-i instead of n-1
            if (arr[j] > arr[j+1]) { //then swap
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr [j+1] = temp;
            }
        }
    }
    cout<<endl;
    for (int i = 0; i < n; i++) {
       cout<<arr[i]<<" ";
    }
}