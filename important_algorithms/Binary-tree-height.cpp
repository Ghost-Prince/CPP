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
int height(Node* root) {
    if(root==NULL) {
        return 0;
    }
    int left_height=height(root->left);
    int right_height=height(root->right);
    return max(left_height,right_height)+1;
}
int main() {
    Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->right->left=new Node(6);
    root->right->right=new Node(7);
    root->left->right->left=new Node(8);
    cout<<height(root)<<endl;
    return 0;
}