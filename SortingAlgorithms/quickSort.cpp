#include <bits/stdc++.h>
using namespace std;

int partition(vector<int> &arr, int st, int end){
    int idx = st-1, pivot = arr[end];

    for(int j = st; j < end; j++){
        if(arr[j] <= pivot){
            idx++;
            swap(arr[j], arr[idx]);
        }
    }

    idx++;
    swap(arr[end], arr[idx]);
    return idx;
}

void quickSort(vector<int> &arr, int st, int end){
    if(st < end){
        int pvtIdx = partition(arr, st, end);
        quickSort(arr, st, pvtIdx-1); // Left Half
        quickSort(arr, pvtIdx+1, end); // Right Half
    }
}

int main (){
    vector<int> arr = {12, 31, 35, 8, 32, 17};
    quickSort(arr, 0, arr.size()-1);

    for(int val : arr){
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}