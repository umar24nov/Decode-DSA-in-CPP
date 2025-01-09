#include <iostream>
using namespace std;
int main() {
    int arr[] = {10,20,30,40,50,40};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    bool flag = false;
    for(int i=0;i<n;i++) {
        for(int j = i+1;j<n;j++) {
            if(arr[i] == arr[j]) {
             flag = true;
                break;
            }
        }
        if (flag == true)
        break;
    }
    if (flag == true) {
        cout<<"Array contains duplicates! "<<endl;
    }
    else {
        cout<<"Array doesn't contain duplicates! "<<endl;
    }


    return 0;
}