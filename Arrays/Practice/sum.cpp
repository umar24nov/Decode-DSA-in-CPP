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
    int sum = 0;
    for(int i = 0; i < size; i++){
        sum+=arr[i];
    }
    cout<<"Sum of all elements in array is : "<<sum;
    return 0;
}