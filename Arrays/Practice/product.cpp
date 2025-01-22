#include <iostream>
using namespace std;
int main (){
    int size;
    cout<<"Enter size of array : ";
    cin>>size;
    int arr[size];
    cout<<"Enter array elements : ";
    for(int i = 0; i < size; i++){
        cin>>arr[i];
    }
    int product = 1;
    for(int i = 0; i < size; i++){
        product*=arr[i];
    }
    cout<<"Product of all elements in array is : "<<product;
    return 0;
}