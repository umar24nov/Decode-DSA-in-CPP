#include <iostream>
using namespace std;

void count(string s){
    int vowelCount = 0;
    int consonantCount = 0;
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U') {
            vowelCount++;
        }
        // else if(s[i] != 'a' || s[i] != 'e' || s[i] != 'i' || s[i] != 'o' || s[i] != 'u' || s[i] != 'A' || s[i] != 'E' || s[i] != 'I' || s[i] != 'O' || s[i] != 'U') {
        //     consonantCount++;
        // }
        else if (isalpha(s[i])) { // Inbuilt Function
            consonantCount++;
        }
    }
    cout<<"Vowels Count : "<<vowelCount<<endl;
    cout<<"Consonant Count : "<<consonantCount<<endl;
}
int main(){
    string s;
    cout<<"Enter a string : ";
    getline(cin,s);
    //  string s = "c    g     h";

    // Calling Function
    count(s);
}