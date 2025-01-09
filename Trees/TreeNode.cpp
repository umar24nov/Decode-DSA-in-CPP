#include <iostream>
#include <climits>
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

void displayTree(Node* root){
    if(root == NULL) return;
    cout<<root->val<<" ";
    displayTree(root->left);
    displayTree(root->right);

}

int sumOfTree(Node* root){
    if(root == NULL) return 0;
    return root->val + sumOfTree(root->left) + sumOfTree(root->right);
}

int sizeOfTree(Node* root){
    if(root == NULL) return 0;
    return 1 + sizeOfTree(root->left) + sizeOfTree(root->right);
}

int maxInTree(Node* root){
    if(root == NULL) return 0;
    int lmax = maxInTree(root->left);
    int rmax = maxInTree(root->right);
    return max(root->val, max(lmax, rmax));

}

int main(){
    Node* a = new Node(1);
    Node* b = new Node(9);
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
    cout<<"Displaying Tree Value's : ";
    displayTree(a);
    cout<<endl;
    cout<<"Sum Of Tree : " << sumOfTree(a)<<endl;
    cout<<"Size Of Tree : " << sizeOfTree(a)<<endl;
    cout<<"Max In Tree : " << maxInTree(a)<<endl;
}