#include <iostream>
#include <vector>
using namespace std;
class Node{
public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }

};

class Stack{
public:
    Node* head;
    int size;

    Stack(){
        head = NULL;
        size = 0;
    }

    void push(int val){
        Node* temp = new Node(val);
        temp->next = head;
        head= temp;
        size++;
    }

    void pop(){
        if(head == NULL){
            cout<<"Stack Underflow"<<endl;
            return;
        }
        head = head->next;
        size--;
    }

    void top(){
        if(head == NULL){
            cout<<"Stack Underflow"<<endl;
            return;
        }
        cout<<head->val<<endl;
        return;
    }

    void print(Node* temp){
        if(temp == NULL) return;
        print(temp->next);
        cout<<temp->val<<" ";
    }

    void display(){
        Node* temp = head;
        print(temp);
        cout << endl;
    }

    void getSize(){
        cout<<size<<endl;
        return;
    }
};

int main(){
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.display();
    st.getSize();
    st.top();
    st.getSize();
    st.pop();
    st.getSize();
}