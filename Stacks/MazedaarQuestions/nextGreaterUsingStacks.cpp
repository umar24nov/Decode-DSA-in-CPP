#include <iostream>
#include <stack>
using namespace std;
int main(){
    int arr[] = {3,1,2,7,4,6,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0; i < n; i++ ){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int nextGreater[n];

    // Using a Stack : pop, ans, push
    // TC = O(n), SC = O(n)
    stack<int> st;
    nextGreater[n-1] = -1;
    st.push(arr[n-1]); 
    for(int i = n-2; i >= 0; i--){
        while(!st.empty() && st.top() <= arr[i]){
            st.pop();
        }
        if(st.empty()) nextGreater[i] = -1;
        else nextGreater[i] = st.top();
        st.push(arr[i]);
    }
    for(int i = 0; i < n; i++ ){
        cout<<nextGreater[i]<<" ";
    }
}