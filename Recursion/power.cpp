#include <iostream>
using namespace std;

int pow(int a, int b) {
    if(b == 0) return 1;
    int ans = a * pow(a, b -1);
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
    cout<<a<<" raised to the power "<<b<<" is "<<result;
    return 0;
}