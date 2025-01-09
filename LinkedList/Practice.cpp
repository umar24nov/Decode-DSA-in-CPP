#include <iostream>
using namespace std;
class Node{
public:
    int val;
    Node* next;
    Node(int val){
        this->next = NULL;
        this->val = val; 
    }
};

void display(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
}

int displaySize(Node* head){
    Node* temp = head;
    int size = 0;
    while(temp != NULL){
        size++;
        temp = temp->next;
    }
    return size;
}

void displayRec(Node* head){
    if(head == NULL) return;
    cout<<head->val<<" ";
    displayRec(head->next);
}



int main(){
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
    Node* e = new Node(50);
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    // display(a);
    cout<<displaySize(a);
    cout<<endl;
    displayRec(a);
    
}