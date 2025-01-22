/*
           Here's the Binary Tree I worked with.
 
                             1  
                            /  \  
                           2    3  
                          / \  / \  
                         4   5 6   7
*/







#include <iostream>
using namespace std;

class Node{
public:
    int val;
    Node* right;
    Node* left;
    Node(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

void preorder(Node* root){
    if(root ==  NULL) return;
    cout<<root->val<<" ";
    preorder(root->left);
    preorder(root->right);
}


void inorder(Node* root){
    if(root ==  NULL) return;
    inorder(root->left);
    cout<<root->val<<" ";
    inorder(root->right);
}

void postorder(Node* root){
    if(root ==  NULL) return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->val<<" ";
}

int main(){

    Node* a = new Node(1);
    Node* b = new Node(2);
    Node* c = new Node(3);
    Node* d = new Node(4);
    Node* e = new Node(5);
    Node* f = new Node(6);
    Node* g = new Node(7);
    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;

    cout<<"Preorder traversal : ";
    preorder(a);
    cout<<endl;
    cout<<"Inorder traversal : ";
    inorder(a);
    cout<<endl;
    cout<<"Postorder traversal : ";
    postorder(a);
    cout<<endl;

    return 0;
}