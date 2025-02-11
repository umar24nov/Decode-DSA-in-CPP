#include <bits/stdc++.h>
using namespace std;
int main (){
    int count = 0;
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int temp = abs(temp);
    while(temp > 0){
        temp /= 10;
        count++;
    }
    cout <<"Number of digits in " << num << " is " << count;
    return 0;
}