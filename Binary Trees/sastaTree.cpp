#include <iostream>
#include <climits>
using namespace std;

class Node{
public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val =val;
        this->left = NULL;
        this->right = NULL;
    }
};

void displayTree(Node* root){
    if(root ==  NULL) return;
    cout<<root->val<<" ";
    displayTree(root->left);
    displayTree(root->right);
}

int sum(Node* root){
    if(root == NULL) return 0;
    return root->val + sum(root->left) + sum(root->right);
}

int product(Node* root){
    if(root == NULL) return 1;
    if(root->val == 0) return 0;
    return root->val * product(root->left) * product(root->right);
}

int levels(Node* root){
    if(root == NULL) return 0;
    return 1 + max(levels(root->left),levels(root->right));
}

int size(Node* root){
    if(root == NULL) return 0;
    return 1 + size(root->left) + size(root->right);
}

int maxOfTree(Node* root){
    if(root == NULL) return INT_MIN;
    int leftMax = maxOfTree(root->left);
    int rightMax = maxOfTree(root->right);
    return max(root->val,max(leftMax,rightMax));
}

int minOfTree(Node* root){
    if(root == NULL) return INT_MAX;
    int leftMax = minOfTree(root->left);
    int rightMax = minOfTree(root->right);
    return min(root->val,min(leftMax,rightMax));
}

int main(){

    // Constructing a Tree
    Node* a = new Node(1);  // root of a tree
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
    
    cout<<"All Nodes of Tree : ";
    displayTree(a);
    cout<<endl;
    cout<<"Sum of all Nodes : "<<sum(a)<<endl;
    cout<<"Size of a Tree: "<<size(a)<<endl;
    cout<<"Maximum Node in Tree : "<<maxOfTree(a)<<endl;
    cout<<"Maximum Node in Tree : "<<minOfTree(a)<<endl;
    cout<<"Product of all Nodes : "<<product(a)<<endl;
    cout<<"Number of total levels : "<<levels(a)<<endl;
return 0;
}