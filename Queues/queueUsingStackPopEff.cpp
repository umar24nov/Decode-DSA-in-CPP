/*
Pop efficient queue using stack 
T.C = O(1), S.C = O(n)
*/


#include <iostream>
#include <stack>
using namespace std;

class Queue{
public:

    stack<int> st;
    
    void enqueue(int x){ // T.C = O(n) 
        stack<int> temp;
        while(!st.empty( )){
            temp.push(st.top());
            st.pop();
        }
        // Push the new element into st
        st.push(x);

        // Move everything back from temp to st
        while(! temp.empty()){
            st.push(temp.top());
            temp.pop();
        } 
    }

    void dequeue(){ // T.C = O(1) 
        if(st.empty()){
            cout<<"Queue is empty!"<<endl;
            return;
        }
        st.pop();
    }
    

    int getFront(){ // T.C = O(1)
        if(st.empty()) {
            cout<<"Queue is empty!"<<endl;
            return -1;
        }
        
        return st.top();
    }

    bool isEmpty(){
        return st.empty();
    }

    void display(){
        if (st.empty()) {
            cout << "Queue is empty!" << endl;
            return;
        }

        // Use a temporary stack to avoid modifying st
        stack<int> temp = st; 
        while (!temp.empty()) {
            cout << temp.top() << " ";
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