/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void solve(TreeNode *root,TreeNode* &pre,int &ans)
    {
        if(root==NULL) return;
        solve(root->left,pre,ans);
        if(pre!=NULL) ans=min(ans,abs(root->val - pre->val));
        pre=root;
        solve(root->right,pre,ans);
    }
    int minDiffInBST(TreeNode* root) 
    {
        int ans=INT_MAX;
        TreeNode *pre=NULL;
        solve(root,pre,ans);
        return ans;
    }
};