#include <iostream>
using namespace std;

int factorial(int n) {
    if(n == 0 or n == 1) return 1;
    return n * factorial(n - 1);
}
int main() {
int x;
cout<<"Enter a number : ";
cin>>x;
int result = factorial(x);
cout<<"Factorial  of "<<x<<" is "<<result<<endl;
return 0;
}