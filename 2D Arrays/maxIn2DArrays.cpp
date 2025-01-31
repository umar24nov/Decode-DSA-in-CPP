#include <bits/stdc++.h>23 
using namespace std;
int main (){
    int arr[2][3];

    // Taking Input In The Matrix
    cout<<"Enter Values In The Matrix: ";
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            cin>>arr[i][j];
        }
    }

    // Printing Values OF Matrix
    cout<<"Matrix values are: ";
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            cout<<arr[i][j]<<" ";
        }
    }

    cout<<endl;
    // Finding Maximum In The Matrix
    int maxVal = INT_MIN;
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            if(maxVal < arr[i][j]){
                maxVal = arr[i][j];
            }
        }
    }

    cout<<"Maximum value in the Matrix is: "<<maxVal;
    return 0;
}