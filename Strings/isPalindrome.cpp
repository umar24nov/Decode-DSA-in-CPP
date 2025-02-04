#include <bits/stdc++.h>
using namespace std;
int main (){
    string str;
    bool isPalindrome  = true;

    cout<<"Enter a string: ";
    getline(cin, str);

    int left = 0;
    int right = str.length() - 1;

    while(left < right){
        if(str[left] != str[right]){
            isPalindrome = false;
            break;
        }
        left++;
        right--;
    }

    if(isPalindrome == true){
        cout<<"The string is a palindrome!";
    }
    else cout<<"The string is not a palindrome!";
    
    return 0;
}