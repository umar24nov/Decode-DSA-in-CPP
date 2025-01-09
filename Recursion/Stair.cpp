// One step, 2 steps allowed at a time

#include <iostream>
using namespace std;

int stair(int n) {
    // base case
    if(n == 2) return 2;
    if(n == 1) return 1;
    int ans = stair(n-1) + stair(n-2);
    return ans;
}

int main() {    
int n;
cout<<"Enter your number : ";
cin>>n;
// 1 2 3 4 5 6 7  8  9  10 11
// 1 1 2 3 5 8 13 21 34 55 89...
int result = stair(n);
cout<<result;
return 0;
}