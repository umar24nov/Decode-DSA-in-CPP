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


class LinkedList{
public:
    Node* head;
    Node* tail;
    int size;
    LinkedList(){
        head = tail = NULL;
        size = 0;
    }

    void insertAtHead(int val){
        Node* temp = new Node(val);
        if(size == 0) {
        head = tail = temp;
        }
        else{
            temp->next = head;
            head = temp;
        }
        size++;
    }

    void insertAtTail(int val){
        Node* temp = new Node(val);
        if(size == 0) head = tail = temp;
        else{
            tail->next = temp;
            tail = temp;
        }
        size++;
    }

    void insertAtIndex(int idx, int val){
        if(idx == 0) insertAtHead(val);
        else if(idx == size) insertAtTail(val);
        Node* new_node = new Node(val);
        Node* temp = head;
        for(int i = 1; i < idx - 1; i++){
            temp = temp->next;
        }
        new_node->next = temp->next;
        temp->next = new_node;
        size++;
    }
    void updateAtIndex(int idx, int val){
        if (idx < 0 || idx >= size) {
            cout << "Invalid Position!" << endl;
            return;
        }
        Node* new_node = new Node(val);
        Node* temp = head;
        for(int i = 1; i <= idx - 1; i++){
            temp = temp->next;
        }
        temp->val = val;
        }

    int getIndex(int idx){
        if(idx == 0) return head->val;
        else if(idx == size - 1) return tail->val;
        else{
            Node* temp = head;
            for(int i = 1; i < idx; i++){
                temp = temp->next;
            }
            return temp->val;
        }
        
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
    LinkedList ll;
    ll.insertAtHead(9);
    // ll.display();
    ll.insertAtHead(10);
    // ll.display();
    ll.insertAtHead(15);
    // ll.display();
    ll.insertAtTail(30);
    // // ll.display();
    ll.insertAtTail(50);
    // ll.display();
    ll.insertAtIndex(2,3);
    // ll.display();
    ll.updateAtIndex(2,5);
    ll.display();
    cout<<ll.getIndex(4);
    cout<<endl;
    cout<<ll.getIndex(2);
    // ll.display();
    // cout<<ll.size;

}