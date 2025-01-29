#include <bits/stdc++.h>
using namespace std;
int main (){
    vector<int> arr1 = {1,4,5,8};
    vector<int> arr2 = {2,3,6,7,10,12}; 
    vector<int> res(arr1.size() + arr2.size());
    int n = arr1.size();
    int m = arr2.size();
    int i = 0, j = 0, k = 0;

    while(i < n and j < m){
        if(arr1[i] <= arr2[j]){
            res[k] = arr1[i];
            i++;
            k++;
        }
        else{ // arr1[i] > arr2[j]
            res[k] = arr2[j];
            j++;
            k++;
        }
    }

    // for remaining elements
    while (i < n) {
        res[k] = arr1[i];
        i++;
        k++;
    }

    // For remaining elements in arr2
    while (j < m) {
        res[k] = arr2[j];
        j++;
        k++;
    }

    cout << "Merged array: ";
    for(int num : res){
        cout<<num<<" ";
    }

    return 0;
}