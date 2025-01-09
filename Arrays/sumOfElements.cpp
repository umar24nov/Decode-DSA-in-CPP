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
    int count = 0;
    int x;
    cout<<"Enter number : ";
    cin>>x;
      for (int i = 0; i < size; i++)
    {
        if (arr[i] > x)
        count++;
    }
    cout<<"Number of elements greater than "<<x<<" are : ";
    cout<<count;


}