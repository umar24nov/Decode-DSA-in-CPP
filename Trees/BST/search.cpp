#include <iostream>
using namespace std;

class Node{
public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* searchInBST(Node* root, int key){
    if(root == NULL){
        return NULL;
    }
    if(root->val == key){
        return root;
    }
    if(root->val > key){
        return searchInBST(root->left, key);
    }
    
    return searchInBST(root->right, key);

}
int main(){

    Node* a = new Node(5); 
    Node* b = new Node(4);
    Node* c = new Node(6);
    Node* d = new Node(2);
    Node* e = new Node(3);
    Node* f = new Node(7);
    Node* g = new Node(8);
    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;

    if(searchInBST(a, 5) == NULL){
        cout<<"key doesn't exist!"<<endl;
    }
    else{
        cout<<"Key exist!"<<endl;
    }

    if(searchInBST(a, 10) == NULL){
        cout << "Key doesn't exist!" << endl;
    } 
    else{
        cout << "Key exists!" << endl;
    }

    return 0;

}