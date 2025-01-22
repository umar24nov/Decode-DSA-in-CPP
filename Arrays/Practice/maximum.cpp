#include <iostream>
#include<climits>
using namespace std;
int main (){
    int arr[] = {1,2,3,40,5,65,7,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int max = INT_MIN;
    for(int i = 0; i < n; i++){
        if(arr[i] > max) 
        max = arr[i];
    }
    cout<<"Maximum is : "<<max;
    return 0;
}