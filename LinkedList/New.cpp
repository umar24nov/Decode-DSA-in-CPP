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
    int size;
    LinkedList(){
        head = NULL;
        size = 0;
    }
    void insertAtHead(int val){
        Node* temp = new Node(val);
            temp->next = head;
            head = temp;
            size++;
    }

    void insertAtTail(int val){
        Node* temp = new Node(val);
        if(head == NULL) head = temp;
        else{
            Node* current  = head;
            while(current->next != NULL){
                current = current->next;
            }
            current->next = temp;
        }
        size++;
    }

    void insertAtIdx(int idx, int val){
        Node* temp = new Node(val);
        if(idx < 0 or idx > size){
            cout<<"Invalid Index!";
            return;
        }
        else if(idx == 0) insertAtHead(val);
        else{
            Node* new_node = new Node(val);
            Node* temp = head;
            for(int i = 1; i < idx - 1; i++){
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

    void display(){
        Node* temp = head;
        while(temp != NULL){
            cout<<temp->val<<" "<<endl;
            temp = temp->next;
        }
    }

};

int main(){
    LinkedList ll;
    cout<<"After Inserting 10 At Head"<<endl;
    ll.insertAtHead(10); // 10->NULL
    ll.display();
    cout<<"After Inserting 20 At Tail"<<endl;
    ll.insertAtTail(20); // 10-20->NULL
    ll.display();
    cout<<"After Inserting 5 At index 2"<<endl;
    ll.insertAtIdx(2,5);
    ll.display();
    cout<<"After Updating 40 At position 2"<<endl;
    ll.updateAtPositition(2,40);
    ll.display();

}