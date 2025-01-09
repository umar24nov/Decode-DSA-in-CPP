#include <iostream>
using namespace std;
int main () {
    int arr[] = {5,4,6,3,15,2,1,-5,-3,0,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < n; i++) {
        cout<<arr[i]<<" ";
    }
    // bubble sort optimised
    for (int i = 0; i < n-1; i++) {  // n-1 passes
        //  traversal
        bool flag = true;
        for ( int j = 0; j < n-1-i; j++) { // to avoid extra comparison we use n-1-i instead of n-1
            if (arr[j] > arr[j+1]) { //  swap
                swap(arr[j],arr[j+1]); // Inbuilt function
                flag = false; // false means swapping happen
            }
        }
        if(flag == true) break; 
    }
    cout<<endl;
    for (int i = 0; i < n; i++) {
       cout<<arr[i]<<" ";
    }
}