#include <iostream>
#include <stack>
using namespace std;

bool isBalanced(string s){
    if(s.length() % 2 != 0) return false;

    stack<char> st;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == '(') st.push(s[i]);
        else{
            if(st.empty()) return false;
            else st.pop();
        }
    }
    // if(st.empty()) return true;
    // else return false;
    return st.empty();
}

int main(){
    string s = "()(())(())";
    cout<<"Brackets are : "<<s<<endl;
    if(isBalanced(s) == true) cout<<"Brackets are balanced!"<<endl;
    else cout<<"Brackets are not balanced!"<<endl;
}
