/* Question :
We have to find last occurence of target element in an array
*/

#include <iostream>
using namespace std;
int main() {
    int arr[] = {1, 2, 3, 3, 4, 5, 5, 5, 6, 6, 7, 7, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target;
    cout << "Enter target : ";
    cin >> target;
    int lo = 0;
    int hi = n - 1;
    int idx = -1;

    while (lo <= hi) {
        int mid = (lo + hi) / 2;
        if (arr[mid] == target) {
            idx = mid;
            lo = mid + 1;
        }
        else if (arr[mid] > target)
            hi = mid - 1; // Search in left half
        else
            lo = mid + 1; // Search in right half
    }
    if (idx != -1)
        cout << "Last occurrence of " << target << " is at index " << idx << endl;
    else
        cout << target << " not found in array. " << endl;
    return 0;
}