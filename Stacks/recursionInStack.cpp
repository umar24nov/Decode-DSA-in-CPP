#include <iostream>
#include <stack>
using namespace std;

void displayRevRec(stack<int>& st){
    if(st.size() == 0) return;
    int x = st.top();
    cout<<x<<" ";
    st.pop();
    displayRevRec(st);
    st.push(x);
}

void displayRec(stack<int>& st){
    if(st.size() == 0) return;
    int x = st.top();
    st.pop();
    displayRec(st);
    cout<<x<<" ";
    st.push(x);
}

void pushAtbottomRec(stack<int>& st, int val){
    if(st.size() == 0){
        st.push(val);
        return;
    }
    int x = st.top();
    st.pop();
    pushAtbottomRec(st,val);
    st.push(x);
}

// Pushing Elements in reverse order using recursion
void pushInReverse(stack<int>& st){ 
    if(st.size()==1) return;
    int x = st.top();
    st.pop();
    pushInReverse(st);
    pushAtbottomRec(st, x);

}

int main()
{
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    displayRevRec(st);
    cout<<endl;
    displayRec(st);
    cout<<endl;
    pushAtbottomRec(st,45);
    displayRec(st);
    cout<<endl;
    pushInReverse(st);
    displayRec(st);


    return 0;
}