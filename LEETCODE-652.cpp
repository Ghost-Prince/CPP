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
    void mapper(TreeNode* root, unordered_map<TreeNode*,int>& mp) {
        if(root==NULL) return;
        mp[root]++;
        mapper(root->left,mp);
        mapper(root->right,mp);
    }
    vector<TreeNode*> findDuplicateSubtrees(TreeNode* root) {
        unordered_map<TreeNode*,int> mp;
        mapper(root,mp);
        vector<TreeNode*> ans;
        for(auto& it: mp) {
            if(it.second>1) ans.push_back(it.first);
        } 
        return ans;
    }
};
int main() {

    return 0;
}