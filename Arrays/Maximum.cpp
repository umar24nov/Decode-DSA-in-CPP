#include <iostream>
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
    int mx = arr[0];
      for (int i = 1; i < size; i++)
    {
        // if( mx < arr[i])
        // // mx = arr[i];
        mx = max(mx, arr[i]);
    }
    cout<<"Maximum element in array is : "<<mx;
}