#include <bits/stdc++.h>
using namespace std;
int main (){
    int m;
    cout<<"Enter number of rows/columns : ";
    cin>>m;
    int arr[m][m];

    // Taking Input In The Matrix
    cout<<"Enter Values In The Matrix: ";
    for(int i = 0; i < m; i++){
        for(int j = 0; j < m; j++){
            cin>>arr[i][j];
        }
    }
    // Normal Matrix
    cout<<"The Normal Matrix is: "<<endl;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < m; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    // Transpose Matrix
    for(int i = 0; i < m; i++){
        for(int j = i+1; j < m; j++){
            // Swapping i,j with j,i 
            swap(arr[i][j],arr[j][i]);
        }
        cout<<endl;
    }


    // Printing Transpose Matrix
    cout<<"The Transpose Matrix is: "<<endl;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < m; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}