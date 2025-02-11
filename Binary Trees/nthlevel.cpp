/*
           Here's the Binary Tree I worked with.
 
                             1           
                            /  \              
                           2    3  
                          / \  / \  
                         4   5 6   7
*/


#include <bits/stdc++.h>
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

void nthLevel(Node* root, int currlvl, int tarlvl){
    if(root ==  NULL) return; // base case
    if(currlvl == tarlvl) cout<<root->val<<" ";
    nthLevel(root->left, currlvl+1, tarlvl);
    nthLevel(root->right, currlvl+1, tarlvl);
}


int main (){
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
    
    int x;
    cout<<"Enter target level: ";
    cin >> x;

    nthLevel(a, 1, x);
    return 0;
}