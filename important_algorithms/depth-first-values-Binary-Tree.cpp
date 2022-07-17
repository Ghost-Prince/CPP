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
void DFS(Node* root) {    // ITERATIVE
    if(root==NULL) {
        return;
    }
    vector<Node*> stack;
    stack.push_back(root);
    while(stack.size()) {
        Node* curr=stack.back();
        stack.pop_back();
        cout<<curr->data<<" ";
        if(curr->right) stack.push_back(curr->right);
        if(curr->left) stack.push_back(curr->left);
    }
}
int main() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    DFS(root);
    return 0;
}