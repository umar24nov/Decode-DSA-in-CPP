#include <bits/stdc++.h>
using namespace std;
int main (){
    int m, n;
    cout<<"Enter number of rows : ";
    cin>>m;
    cout<<"Enter number of column : ";
    cin>>n;
    int arr[m][n];

    // Taking Input In The Matrix
    cout<<"Enter Values In The Matrix: ";
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cin>>arr[i][j];
        }
    }

    // Printing Values Of Matrix
    cout<<"Matrix values are: "<<endl;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }



    // cout<<endl;
    // // Printing Transpose Of The Matrix
    // int sum = 0;
    // for(int i = 0; i < 2; i++){
    //     for(int j = 0; j < 2; j++){
    //         cout<<arr[j][i]<<" ";
    //     }
    //     cout<<endl;
    // }
    return 0;
}