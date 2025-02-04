#include <bits/stdc++.h>
using namespace std;
int main (){
    string str = "UMAR";
    int n = str.length();
    for (int i = 0; i < n / 2; i++) {
        // swapping starting n elements with last n elements
        swap(str[i], str[n - i - 1]);
    }
    cout<<str;
    return 0;
}