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
    while(head != NULL){
        cout<<head->val<<" ";
        head = head->next;
    }
    cout<<endl;
}

Node* deleteNode(Node* head, int targetVal){
    if(head->val == targetVal){
        head = head->next;
        return head;
    }
    Node* temp = head;
    while(temp->next->val != targetVal){
        temp = temp->next;
    }
    temp->next = temp->next->next;
    return head;
}
int main(){
    Node* e = new Node(50);
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    Node* head = a;
    display(head);
    head = deleteNode(head,30);
    display(head);

    
}
