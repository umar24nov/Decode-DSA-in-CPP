#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> arr, int n, int target) {
    int lo = 0;
    int hi = n - 1;
    while (lo <= hi) {
        int mid = (lo + hi)/2;
        if(arr[mid] == target) return mid;
        else if (arr[mid] > target) hi = mid - 1;
        else lo = mid + 1;
    }
    return -1;
}
int main () {
vector<int> arr = {1,4,7,9,21,24,26};
int n = arr.size();
int target;
cout<<"Enter element you want to search : ";
cin>>target;

int result = binarySearch(arr,n,target);

if(result != -1) {
    cout <<"Element found at index "<<result<<endl;
}
else {
    cout<<"Element not present!";
}
return 0 ;

}