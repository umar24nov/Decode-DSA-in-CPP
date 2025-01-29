#include <bits/stdc++.h>
using namespace std;
int main (){
    vector<int> arr;
    arr.push_back(1);
    arr.push_back(0);
    arr.push_back(1);
    arr.push_back(0);
    arr.push_back(1);

    int n = arr.size();
    int i = 0;
    int j = n - 1;

    cout<<"Array before sorting O's and 1's : ";
    for(int num : arr){
        cout<<num<<" ";
    }
    cout<<endl;
    while (i < j){
        if(arr[i] == 0) i++;
        if(arr[j] == 1) j--;
        if(i > j) break;
        if(arr[i] == 1 && arr[j] == 0){
            arr[i] == 0;
            arr[j] == 1;
            i++;
            j--;
        }
    }
    
    cout<<"Array after sorting O's and 1's : ";
    for(int num : arr){
        cout<<num<<" ";
    }

    
    return 0;
}