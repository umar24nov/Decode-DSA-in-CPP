#include <iostream>
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

class Queue{
public:
    Node* head;
    Node* tail;
    int size;
    Queue(){
        this->head = NULL;
        this->tail = NULL;
        this->size = 0;
    }

    void enqueue(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
        }
        else{
            tail->next = newNode;
            tail = newNode;
        }
        size++;
    }

    void dequeue(   ){
        if(head == NULL){
            cout<<"Queue is Empty!"<<endl;
            return;
        }
        else{
        Node* temp = head;
        head = head->next;
        delete temp;
        if(head == NULL) tail = NULL;
        }
        size--;
    }
    void getSize(){
        cout<<size<<endl;
        return;
    }

    bool isEmpty(){
        return head == NULL;
    }

    int front(){
        if(head == NULL) return -1;
        return head->val;
    }
    void display(){
        Node* temp = head;
        while(temp != NULL){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
};

int main(){
    Queue qu;
    cout<<"Is the queue empty: "<<boolalpha<<qu.isEmpty()<<endl;

    qu.enqueue(10);
    qu.enqueue(20);
    cout<<"Front of the queque: "<<qu.front()<<endl;
    cout<<"Is the queue empty: "<<boolalpha<<qu.isEmpty()<<endl;

    qu.enqueue(30);
    cout<<"Contents of queque: ";
    qu.display();
    cout<<"Size of queue: ";
    qu.getSize();
    qu.dequeue();
    cout<<"Queue after one dequeue: ";
    qu.display();
    cout<<"Size of queue after one dequeue: ";
    qu.getSize();
    qu.enqueue(40);
    cout<<"Queue after enqueuing 40 : ";
    qu.display();
    cout<<"Size of queue at present: ";
    qu.getSize();
    return 0; 
}