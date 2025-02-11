// #include <bits/stdc++.h>
// using namespace std;

// int main (){
//     int arr[] = {2,5,7,9};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int prefixSum[n];
    
//     for(int i = 0; i < n; i++){
//         int sum = 0;
//         for(int j = 0; j <= i; j++){
//             sum += arr[j];
//         }
//         prefixSum[i] = sum;
//     }
    
//     for(int num : prefixSum){
//         cout<<num<<" ";
//     }
//     cout<<endl;
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

int main (){
    int arr[] = {2,5,7,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    for(int i = 1; i < n; i++){
        arr[i] += arr[i-1];
    }
    
    for(int num : arr){
        cout<<num<<" ";
    }
    cout<<endl;
    return 0;
}