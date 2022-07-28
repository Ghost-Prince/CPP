#include<bits/stdc++.h>
using namespace std;
class TreeNode {
    public:
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int data) {
        this->val=data;
        this->left=NULL;
        this->right=NULL;
    }
    void root_to_leaf(TreeNode* root, vector<int> path, vector<vector<int>>& paths) {
        if(root==NULL) return;
        path.push_back(root->val);
        if(root->left==NULL and root->right==NULL) {
            paths.push_back(path);
        }
        root_to_leaf(root->left,path,paths);
        root_to_leaf(root->right,path,paths);
    }
};
int main() {
    TreeNode* root=new TreeNode(1);
    root->left=new TreeNode(2);
    root->left->left=new TreeNode(3);
    root->left->right=new TreeNode(4);
    root->right=new TreeNode(5);
    root->right->left=new TreeNode(6);
    root->right->right=new TreeNode(7);
    vector<vector<int>> paths;
    root->root_to_leaf(root,{},paths);
    for(vector<int>& path: paths) {
        for(int& val: path) {
            cout<<val<<" -> ";
        }
        cout<<"NULL"<<endl;
    }
    return 0;
}