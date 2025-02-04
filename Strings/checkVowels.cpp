#include <bits/stdc++.h>
using namespace std;
int main (){
    string name = "Mohammad Umar";
    int n = name.length();
    int numVowel = 0;
    int numConst = 0;
    for(int i = 0; i < n; i++){
        if(name[i] == 'A' || name[i] == 'E' || name[i] == 'I' || name[i] == 'O' || name[i] == 'U' || name[i] == 'a' || name[i] == 'e' || name[i] == 'i' || name[i] == 'o' || name[i] == 'u'){
            numVowel++;
        }
        else{
            if(name[i] == ' ') continue;
            numConst++;
        }
    }

    cout<<"Number of vowels is: "<<numVowel<<endl<<"Number of consonant is: "<<numConst;
    return 0;
}