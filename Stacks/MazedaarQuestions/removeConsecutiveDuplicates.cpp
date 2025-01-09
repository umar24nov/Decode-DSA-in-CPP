#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;
string removeDuplicates(string s){
    stack<char> st;

    
    for(int i = 0; i < s.length(); i++){
        if(st.empty() ||  s[i] != st.top()) st.push(s[i]);
    }
    s = "";
    while(!st.empty()){
        s += st.top();
        st.pop();
    }
    reverse(s.begin(), s.end());
    return s;

}
int main(){
    string s = "aaaabbcddaaffg";
    cout<<"Input string is : "<<s<<endl;
    s = removeDuplicates(s);
    cout<<"String after removing consecutive duplicates : "<<s<<endl;

    return 0;
}