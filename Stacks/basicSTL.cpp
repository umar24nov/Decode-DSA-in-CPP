#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    // Using Extra Stack (temp) To Print
    stack <int> temp;
    while(st.size()>0){
        cout<<st.top()<<" ";
        temp.push(st.top());
        st.pop();
    }

    // Putting elements back to initial stack st
    while (temp.size()>0){
        st.push(temp.top());
        temp.pop();
    }
    return 0;
}