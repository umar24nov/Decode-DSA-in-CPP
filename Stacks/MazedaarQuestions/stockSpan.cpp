#include <iostream>
#include <stack>
using namespace std;
int main(){
    int arr[] = {100,80,60,81,70,60,75,85};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0; i < n; i++ ){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    // Prevois Greater Elements Index Array
    int pgi[n];

    // Using a Stack : pop, ans, push
    // TC = O(n), SC = O(n)

    stack<int> st;
    pgi[0] = 1; // pgi  = previousGreaterIndex
    st.push(0); 
    for(int i = 1; i <= n-1; i++){
        while(!st.empty() && arr[st.top()] <= arr[i]){
            st.pop();
        }
        if(st.empty()) pgi[i] = -1;
        else {
        pgi[i] = st.top();
        pgi[i] = i - pgi[i];
        st.push(i); 
        }
    }

    for(int i = 0; i < n; i++ ){
        cout<<pgi[i]<<" ";
    }
    cout<<endl;
    return 0;
}