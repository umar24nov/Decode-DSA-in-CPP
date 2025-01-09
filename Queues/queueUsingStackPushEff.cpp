/*
Push efficient queue using stack 
T.C = O(1), S.C = O(n)
*/


#include <iostream>
#include <stack>
using namespace std;

class Queue{
public:

    stack<int> st;
    
    void enqueue(int x){ // T.C = O(1) 
        st.push(x);
    }

    void dequeue(){ // T.C = O(n) 
        if(st.empty()){
            cout<<"Stack is empty!";
            return;
        }
        stack<int> temp;
        while(st.size() > 1){
            temp.push(st.top());
            st.pop();
        }
        // Removing the front element
        st.pop();
        // Transferring back to the original stack
        while(! temp.empty()){
            st.push(temp.top());
            temp.pop();
        }
    }

    int getFront(){ // T.C = O(n)
        if(st.empty()) {
            cout<<"Queue is empty!";
            return -1;
        }
        stack<int> temp;
        // Accessing front element without removing it
        while (st.size() > 1) {
            temp.push(st.top());
            st.pop();
        }
        int front = st.top(); // Get the front element
        temp.push(front);     // Push it to temp to maintain stack state

        // Restore original stack state
        while (!temp.empty()) {
            st.push(temp.top());
            temp.pop();
        }
        return front;
    }

    bool isEmpty(){
        return st.empty();
    }

    void display(){
        if(st.empty()){
            cout<<"Queue is empty!";
            return;
        }
        // Transferring elements to temp stack to access the "front" of the queue
        stack<int> temp;
        while(!st.empty()){
            temp.push(st.top());
            st.pop();
        }
        while(!temp.empty()){
            cout<<temp.top()<<" ";
            st.push(temp.top());
            temp.pop();
        }
        cout<<endl;
    }
};

int main(){
    Queue qu;
    cout<<"Is the queue empty? " << boolalpha << qu.isEmpty() << endl;

    qu.enqueue(1);
    qu.enqueue(2);
    qu.enqueue(3);

    cout << "Queue after enqueue operations: ";
    qu.display();

    cout << "Front element: " << qu.getFront() << endl;

    qu.dequeue();
    cout << "Queue after one dequeue operation: ";
    qu.display();

    cout << "Is the queue empty? " << boolalpha << qu.isEmpty() << endl;

    return 0;
}