#include <bits/stdc++.h>
using namespace std;

int power(int m, int n) {
    if(n == 0) return 1;
    return m * power(m, n-1);
} 

int main (){
    int a;
    cout << "Enter Base: ";
    cin >> a;

    int b;
    cout << "Enter Power: ";
    cin >> b;

    int result  = power(a, b);
    cout<<a<<" to the power "<<b<<" : "<<result;
    return 0;
}



