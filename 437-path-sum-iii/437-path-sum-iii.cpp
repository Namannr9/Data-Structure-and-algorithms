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
    void findSum(TreeNode *root,long sum,int &ans)
    {
        if(root==NULL) return;
        if(root->val==sum) ans++;
        findSum(root->left,sum-root->val,ans);
        findSum(root->right,sum-root->val,ans);
    }
    void preorder(TreeNode *root,long sum,int &ans)
    {
        if(root==NULL) return;
        findSum(root,sum,ans);
        preorder(root->left,sum,ans);
        preorder(root->right,sum,ans);
        
    }
    int pathSum(TreeNode* root, int targetSum) 
    {
        int ans=0;
        preorder(root,targetSum,ans);
        return ans;
    }
};