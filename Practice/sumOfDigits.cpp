#include <bits/stdc++.h>
using namespace std;

int sumOfDigits(int num){
   if(num < 0) return -1;

   int sum = 0;
   while(num > 0){
    sum = sum + num % 10;
    num = num / 10;
    } 
    return sum;
}

int main (){
    int num;
    cout << "Enter a number: ";
    cin >> num;
    int sum = sumOfDigits(num);
    cout << sum;
    return 0;
}