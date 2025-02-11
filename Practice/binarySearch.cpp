#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int target,int n){
    int lo = 0;
    int hi = n-1;

    while(lo <= hi){
        int mid = (lo + hi) / 2;
        if(arr[mid] = target) return mid;
        else if(arr[mid] < target) low  = mid + 1;
        else hi = mid - 1; // arr[mid] > target
    }
    return -1;
}

int main (){
    vector<int> arr;
    int n = arr.size();
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    int target;
    cout << "Enter target elements: ";
    cin >> target;

    binarySearch(arr, target, n);

    return 0;
}