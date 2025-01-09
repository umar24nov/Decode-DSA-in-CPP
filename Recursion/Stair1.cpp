// One step, 2 steps allowed ans 3 steps allowed at a time

#include <iostream>
using namespace std;

int stair(int n) {
    // base case
    if(n == 0) return 1;
    if(n == 1) return 1;
    if(n == 2) return 2;
    if(n == 3) return 4;
    int ans = stair(n-1) + stair(n-2) + stair(n-3);
    return ans;
}

int main() {    
int n;
cout<<"Enter your numnber : ";
cin>>n;
int result = stair(n);
cout<<"Number of ways to reach the top : "<<result;
return 0;
}