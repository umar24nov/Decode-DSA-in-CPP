#include <bits/stdc++.h>
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

    // Printing Values Of Matrix
    cout<<"Matrix values are: ";
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            cout<<arr[i][j]<<" ";
        }
    }

    cout<<endl;
    // Finding Sum In The Matrix
    int sum = 0;
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            sum += arr[i][j];
        }
    }

    cout<<"Sum of the value in the Matrix is: "<<sum;
    return 0;
}