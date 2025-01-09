#include <iostream>
#include <vector> 
using namespace std;
class Solution {
public:
    int search(vector<int> & arr, int target) {
        int n = arr.size();
        int lo = 0;
        int hi = n-1;
        while(lo<=hi){
            int mid = (lo+hi)/2;
            if(arr[mid] == target) return mid;
            else if(arr[mid] > target) hi = mid - 1;
            else lo = mid + 1;
        }
        return -1;    
    }
};

int main(){
    vector<int> arr;
    int target;
}