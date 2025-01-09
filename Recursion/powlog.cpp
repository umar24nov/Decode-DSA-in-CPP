#include <iostream>
using namespace std;

int pow(int x, int n) {
   
    if(x == 0) return -1;
    if (n == 0) return 1;  // Base case
    

    int ans = pow(x, n/2);
    ans = ans * ans;

    if(n % 2 != 0)
    ans = ans * x;

    return ans;
}
int main() {
    int a;
    cout<<"Enter base : ";
    cin>>a;
    int b;
    cout<<"Enter exponent : ";
    cin>>b;
    int result = pow(a,b);
    
    cout<<a<<" raised to the power "<<b<<" is : "<<result;
    return 0;
}