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
    TreeNode *solve(int &index,vector<int> &preorder,int maxVal)
    {
        if(index>=preorder.size() || preorder[index]>maxVal) return NULL;
        
        TreeNode *root=new TreeNode(preorder[index++]);
        
        root->left=solve(index,preorder,root->val);
        root->right=solve(index,preorder,maxVal);
        return root;
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) 
    {
        int index=0;
        return solve(index,preorder,INT_MAX);    
    }
};