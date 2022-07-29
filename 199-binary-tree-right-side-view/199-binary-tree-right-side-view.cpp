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
    void solve(TreeNode *root,int &maxLevel,int level,vector<int> &ans)
    {
        if(root==NULL) return;
        if(maxLevel < level)
        {
            ans.push_back(root->val);
            maxLevel=level;
        }
        solve(root->right,maxLevel,level+1,ans);
        solve(root->left,maxLevel,level+1,ans);
        
    }
    vector<int> rightSideView(TreeNode* root) 
    {
        vector<int> ans;
        if(root==NULL) return ans;
        int maxLevel=0;
        int level=1;
        solve(root,maxLevel,level,ans);
        return ans;
    }
};