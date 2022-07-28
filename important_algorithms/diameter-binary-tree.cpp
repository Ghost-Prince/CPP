#include<bits/stdc++.h>
using namespace std;
class TreeNode {
public:
    int val;
    TreeNode* left;
    TreeNode* right;
    int height(TreeNode* root, int& diameter) {
        if(root==NULL) return 0;
        int lh=height(root->left,diameter);
        int rh=height(root->right,diameter);
        diameter=max(diameter,rh+lh);
        return max(rh,lh)+1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int diameter=INT_MIN;
        height(root,diameter);
        return diameter;
    }
};
int main() {
    return 0;
}