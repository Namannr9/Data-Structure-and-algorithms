/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode *ans;
    void solve(TreeNode *root,TreeNode *target)
    {
        if(root==NULL) return;
        if(root->val==target->val)
        {
            ans=root;
            return;
        }
        if(ans==NULL) solve(root->left,target);
        if(ans==NULL) solve(root->right,target);
    }
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) 
    {
        ans=NULL;
        solve(cloned,target);
        return ans;
        
    }
};