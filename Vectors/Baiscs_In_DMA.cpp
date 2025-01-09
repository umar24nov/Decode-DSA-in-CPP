#include <iostream>
using namespace std;
int main(){
    int* arr = new int[5]; // Array Dynamically initialized

    // Array Declaration 
    arr[0] = 5;
    arr[1] = 7;
    arr[2] = 9;

    cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2];
    return 0;
}