#include <iostream>
using namespace std;

int fibo(int n) {
    // base case
    if(n == 1 || n == 2) return 1;
    return fibo(n - 1) + fibo(n  - 2);
}

int main() {    
int n;
cout<<"Enter your numnber : ";
cin>>n;
// 1 1 2 3 5 8 13 21 34 55 89...
int result = fibo(n);
cout<<n<<"th number of fibonacci series is : "<<result;
return 0;
}