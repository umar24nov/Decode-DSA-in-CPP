#include <iostream>
using namespace std;

class Stack{
public:
    int arr[7];
    int index;
    Stack(){
        index = -1;
    }

    void push(int val){
        if(index < 6){
        index++;
        arr[index] = val;
        }
        else{
            cout<<"Stack Overflow!"<<endl;
        }
        
    }

    void pop(){
        if(index > -1){
            index--;
        }
        else{
            cout<<"Stack Underflow!"<<endl;
        }
        
    }

    int top(){
        if(index > -1){
            return arr[index];
        }
        else{
            cout<<"Stack Is Empty!"<<endl;
            return -1;
        }  
    }

    int size(){
        return index+1;
    }

    void display(){
        if(index == -1){
            cout<<"Stack Is Empty!"<<endl;
            return;
        }
        for(int i = 0; i <= index; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

};

int main(){
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    // cout<<st.size()<<endl;
    // cout<<st.top()<<endl;
    // // st.pop();
    // cout<<st.top()<<endl;
    // // st.pop();
    // cout<<st.size();
    st.display();
    
}