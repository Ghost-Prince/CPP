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
vector<vector<int>> BFS(Node* root) {
    if(root==NULL) return {};
    vector<vector<int>> level_order;
    queue<Node*> q;
    q.push(root);
    while(q.size()) {
        vector<int> level;
        int len=q.size();
        for(int i=0; i<len; i++) {
            level.push_back(q.front()->data);
            if(q.front()->left != NULL) q.push(q.front()->left);
            if(q.front()->right != NULL) q.push(q.front()->right);
            q.pop();
        }
        level_order.push_back(level);
    }
    return level_order;
}
void BFS_print(Node* root) {
    if(root==NULL) return;
    queue<Node*> q;
    q.push(root);
    while(q.size()) {
        int len=q.size();
        for(int i=0; i<len; i++) {
            cout<<q.front()->data<<" ";
            if(q.front()->left != NULL) q.push(q.front()->left);
            if(q.front()->right != NULL) q.push(q.front()->right);
            q.pop(); 
        }
        cout<<endl;
    }
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
    for(vector<int>& level: BFS(root)) {
        for(int& num: level) {
            cout<<num<<" ";
        }
        cout<<endl;
    }
    BFS_print(root);
    return 0;
}