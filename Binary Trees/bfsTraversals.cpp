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

int levels(Node* root){
    if(root == NULL) return 0;
    return 1 + max(levels(root->left),levels(root->right));
}

void nthlevel(Node* root, int  currLevel, int tarlevel){
    if(root ==  NULL) return;{
        if(currLevel == tarlevel){
            cout<<root->val<<" ";
            return;
        }
    }
    nthlevel(root->left, currLevel+1, tarlevel);
    nthlevel(root->right, currLevel+1, tarlevel);
}

void levelOrder(Node* root){
    int n = levels(root);
    for(int i = 1; i <= n; i++){
        nthlevel(root, 1, i);
        cout<<endl;
    }
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
    levelOrder(a); // passing (root, currLevel, tarLevel)

    return 0;
}