#include <iostream>
#include <climits>
using namespace std;
int main () {
    int size;
    cout<<"Enter size of array : ";
    cin>>size;
    int arr[size];
    cout<<"Enter array elements : ";
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    int mx = INT_MIN;
    int smx = INT_MIN;
      for (int i = 0; i < size; i++)
    {
        if( mx < arr[i])   mx = arr[i];
    }

     for (int i = 0; i < size; i++)
    {
        if( smx < arr[i] and arr[i] != mx)   
        smx = arr[i];
    }

    cout<<"Second maximum element in array is : "<<smx;
}