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
   void solve(TreeNode *root,TreeNode * &pre,bool &ans)
    {
        if(root==NULL) return;
        solve(root->left,pre,ans);
        if(pre && root->val<=pre->val)
        {
            ans=0;
            return;
        }
        pre=root;
        solve(root->right,pre,ans);
    }
    bool isValidBST(TreeNode* root) 
    {
        TreeNode *pre=NULL;
        bool ans=true;
        solve(root,pre,ans);
        return ans;
    }
    
    /*
    bool solve(TreeNode *root,long min,long max)
    {
        if(root==NULL) return true;
        
        if(root->val >=max || root->val <=min) return false;
        
        return solve(root->left,min,root->val) && solve(root->right,root->val,max);
    }
    
    bool isValidBST(TreeNode* root) 
    {
        return solve(root,LONG_MIN,LONG_MAX);    
    }
    */
};