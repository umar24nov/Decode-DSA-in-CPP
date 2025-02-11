// 1 1 2 3 5 8 13

#include <bits/stdc++.h>
using namespace std;

int fibo(int n){
    if(n == 1 || n == 2) return 1;
    return fibo(n-1) + fibo(n-2);
}

int main (){
    cout<<"Fibo Series: "<<fibo(5); 
    return 0;
}