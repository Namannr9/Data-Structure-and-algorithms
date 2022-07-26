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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* a, TreeNode* b) 
    {
        if(root==NULL || a==NULL || b==NULL) return NULL;
        if(root==a || root==b) return root;
        TreeNode *left=lowestCommonAncestor(root->left,a,b);
        TreeNode *right=lowestCommonAncestor(root->right,a,b);
        
        if(left && right) return root;
        if(!left) return right;
        return left;
    }
};