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
void display(Node* head){
    Node* temp = head;
    while (temp != NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
}

int printSize(Node* head){
    int size = 0;
    Node* temp = head;
    while(temp != NULL){
        temp = temp->next;
        size++;
    }
    return size;
}


void displayRecursively(Node* head){
    if(head == NULL) return;
    cout<<head->val<<" ";
    displayRecursively(head->next);
}

void reverseDisplay(Node* head){
    if(head == NULL) return;
    reverseDisplay(head->next);
    cout<<head->val<<" ";
}

void insertAtTail(Node* head, int val){
    Node* t = new Node(val);
    while(head->next != NULL) head = head->next;
    head->next = t;
}
int main(){
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
    a->next = b;
    b->next = c;
    c->next = d;
    display(a);
    cout<<endl;
    cout<<printSize(a);
    cout<<endl;
    displayRecursively(a);
    cout<<endl;
    reverseDisplay(a);
    cout<<endl;
    insertAtTail(a,50);
    display(a);
    cout<<endl;
    cout<<printSize(a);

    
    
}