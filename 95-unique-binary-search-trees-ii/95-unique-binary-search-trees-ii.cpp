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
    vector<TreeNode *> solve(int left,int right)
    {
        if(left>right) return {NULL};
        if(left==right) return {new TreeNode(left)};
        
        vector<TreeNode *> ans;
        for(int i=left;i<=right;i++)
        {
            vector<TreeNode *> leftTree=solve(left,i-1); 
            vector<TreeNode *> rightTree=solve(i+1,right);
            
            for(TreeNode *l : leftTree)
            {
                for(TreeNode *r : rightTree)
                {
                    TreeNode *root=new TreeNode (i,l,r);
                    ans.push_back(root);
                }
            }
        }
        return ans;
    }
    vector<TreeNode*> generateTrees(int n) 
    {
        int left=1;
        int right=n;
        return solve(1,n);
    }
};