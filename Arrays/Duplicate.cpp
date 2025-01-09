#include <iostream>
using namespace std;
void haveDuplicate(int arr[], int n){
    for(int i = 0; i < n; i++){
        for(int j  = i+1; j < n; j++){
            if(arr[i] == arr[j]){
                cout<<"Duplicates Found! "<<arr[i]<<endl;
                return;
            }
        }
    }
    cout<<"No Duplicates Found! "<<endl;
}
int main(){
    int arr[] = {5,3,9,7,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    haveDuplicate(arr,n);
    return 0;
}