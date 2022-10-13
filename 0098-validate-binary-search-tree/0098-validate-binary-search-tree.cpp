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
    bool solve(TreeNode *root,long &pre)
    {
        if(root==NULL) return true;
        bool left=solve(root->left,pre);
        if(root->val<=pre) return false;
        pre=root->val;
        bool right=solve(root->right,pre);
        return left && right;
    
    }
    bool isValidBST(TreeNode* root) 
    {
        long pre=LONG_MIN;
        return solve(root,pre);
    }
};