#include<bits/stdc++.h>
using namespace std;
class TreeNode {
    public:
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val) {
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
    int index=0;
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder, int start, int end) {
        if(start>end) {
            return NULL;
        }
        TreeNode* node=new TreeNode(preorder[index++]);
        int position=0;
        for(int i=start; i<=end; i++) {
            if(inorder[i]==node->val) {
                position=i;
                break;
            }
        }
        node->left=buildTree(preorder,inorder,start,position-1);
        node->right=buildTree(preorder,inorder,position+1,end);
        return node;
    }
    void inorder(TreeNode* root) {
        if(root==NULL) {
            return;
        }
        inorder(root->left);
        cout<<root->val<<" ";
        inorder(root->right);
    }
};
int main() {
    vector<int> preorder={1,2,4,3,5};
    vector<int> inorder={4,2,1,5,3};
    TreeNode* root=new TreeNode(0);
    TreeNode* tree=root->buildTree(preorder,inorder,0,4);
    tree->inorder(tree);
    return 0;
}