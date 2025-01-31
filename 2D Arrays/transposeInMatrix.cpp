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
    // Normal Matrix
    cout<<"The Normal Matrix is: "<<endl;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    // // Transpose Of The Matrix
    // cout<<"The Transpose Matrix is: "<<endl;
    // for(int j = 0; j < m; j++){
    //     for(int i = 0; i < n; i++){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }


    // Storing Transpose Matrix In New Array
    int trr[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            trr[i][j] = arr[j][i];
        }
    }

    // Printing Transpose Of The Matrix
    cout<<"The Transpose Matrix is: "<<endl;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout<<trr[i][j]<<" ";
        }
        cout<<endl;
    }



    return 0;
}