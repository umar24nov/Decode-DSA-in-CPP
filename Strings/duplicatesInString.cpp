#include <bits/stdc++.h>
using namespace std;
int main (){
    string str = "geeksforgeeks";
    int n = str.length();
    bool printed[256] = {false};  

    for(int i = 0; i < n; i++){
        bool isDuplicate = false;
        for(int j = i+1; j < n; j++){
            if(str[i] == str[j]){
                isDuplicate = true;
                break;
            }
        }
        if (isDuplicate && !printed[str[i]]) {
            cout << str[i] << " ";
            printed[str[i]] = true;
        }
    }


    
    return 0;
}

