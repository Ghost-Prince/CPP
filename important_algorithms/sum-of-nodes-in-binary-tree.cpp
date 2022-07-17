#include<bits/stdc++.h>
using namespace std;
class Node {
    public:
    int data;
    Node* left;
    Node* right;
    Node(int val) {
        this->data=val;
        this->left=NULL;
        this->right=NULL;
    }
};
int SumOfNodes(Node* root) {
    if(root==NULL) {
        return 0;
    }
    return SumOfNodes(root->left) + SumOfNodes(root->right) + root->data;
}
int main() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    cout<<SumOfNodes(root);
    return 0;
}