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
        if(size == 0) head = tail = temp;
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

    void insertAtIdx(int idx, int val){
        if(idx < 0 || idx > size) cout<<"Invalid Index!";
        else if(idx == 0) insertAtHead(val);
        else if(idx == size) insertAtTail(val);
        else{
            Node* new_node = new Node(val);
            Node* temp = head;
            for(int i = 1; i <= idx - 1; i++){
                temp = temp->next;
            }
            new_node->next = temp->next;
            temp->next = new_node;
            size++;
        }
    }

    void updateAtPositition(int pos, int val){
        if (pos < 0 || pos >= size) {
            cout << "Invalid Position!" << endl;
            return;
        }
        Node* temp = head;
        for(int i = 1; i <= pos - 1; i++){
            temp = temp->next;
        }
        temp->val = val;
    }

    int getAtIdx(int idx){
        if(idx < 0 || idx >= size){
            cout<<"Invalid Index!  ";
            return -1;
        }
        else if(idx == 0) return head->val;
        else if(idx == size - 1) return tail->val;
        else{
            Node* temp = head;
            for(int i = 1; i <= idx; i++){
                temp = temp->next;
            }
            return temp->val;
        }
    }

    void deleteAtHead(){
        if(size == 0) {
            cout<<"List is Empty!";
            return;
        }
        head = head->next;
        size--;
    }
    void deleteAtTail(){
        if(size == 0) {
            cout<<"List is Empty!";
            return;
        }
        Node* temp = head;
        while(temp->next != tail){
            temp = temp->next;
        }
        temp->next = NULL;
        tail = temp;
        size--;
    }

    void deleteAtIdx(int idx){
        if(size == 0) {
            cout<<"List is Empty!";
            return;
        }
        else if(idx < 0 || idx >= size){
            cout<<"Invalif Index";
            return;
        }
        else if(idx == 0) return deleteAtHead();
        else if(idx == size - 1) return deleteAtTail();
        else{
            Node* temp = head;
            for(int i = 1; i <= idx - 1; i++){
                temp = temp->next;
            }
            temp->next = temp->next->next;
            size--;
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
    ll.insertAtTail(10);
    ll.insertAtTail(20);
    ll.insertAtTail(30);
    ll.display();
    ll.insertAtHead(0);
    ll.insertAtHead(-20);
    ll.insertAtHead(-10);
    ll.updateAtPositition(2,40);
    ll.display();
    ll.insertAtIdx(4,99);
    ll.display();
    cout<<ll.getAtIdx(4);
    cout<<endl;
    cout<<ll.getAtIdx(9);
    cout<<endl;
    ll.display();
    ll.deleteAtTail();
    ll.display();
    ll.deleteAtHead();
    ll.display();
    ll.deleteAtIdx(3);
    ll.display();

}