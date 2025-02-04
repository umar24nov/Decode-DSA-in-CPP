#include <bits/stdc++.h>
using namespace std;

void display(int arr[][100], int m){
    for(int i = 0; i < m; i++){
        for(int j = 0; j < m; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

void rotate(int arr[][100], int n) {
    for (int i = 0; i < n; i++) {         // rows
        for (int j = i + 1; j < n; j++) { // columns
            swap(arr[i][j], arr[j][i]);
        }
    }
    // Reverse Each Row
    for(int k = 0; k < n; k++){ // Traversing Each Row
        int i = 0;
        int j = n-1;
        while(i <= j){
            swap(arr[k][i],arr[k][j]);
            i++;
            j--;
        }
    }
    return;
}

int main (){
    int m;
    cout<<"Enter number of rows/columns : ";
    cin>>m;
    int arr[100][100];

    // Taking Input In The Matrix
    cout<<"Enter Values In The Matrix: ";
    for(int i = 0; i < m; i++){
        for(int j = 0; j < m; j++){
            cin>>arr[i][j];
        }
    }
    // Normal Matrix
    cout<<"The Normal Matrix is: "<<endl;
    display(arr, m);

    // Transpose Matrix
    for(int i = 0; i < m; i++){
        for(int j = i+1; j < m; j++){
            // Swapping i,j with j,i 
            swap(arr[i][j],arr[j][i]);
        }
    }

    // Printing transpose matrix
    cout<<"The Transpose Matrix is: "<<endl;
    display(arr,m);
    
    // Calling the function of rotating matrix
    rotate(arr, m);

    // Printing rotated matrix
    cout<<"Matrix after rotataing by 90deg is: "<<endl;
    display(arr,m);

    return 0;
}