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
    int findDepth(TreeNode *root)
    {
        if(root==NULL) return 0;
        
        int left=findDepth(root->left);
        if(left==-1) return -1;
        int right=findDepth(root->right);
        if(right==-1) return -1;
        
        if(abs(left-right)>1) return -1;
    
        return max(left,right)+1;
        
    }
    bool isBalanced(TreeNode* root) 
    {
        return findDepth(root)==-1 ? false : true;
    }
    /*
    // Time complexity O(n^2);
    int findDepth(TreeNode *root)
    {
        if(root==NULL) return 0;
        return max(findDepth(root->left),findDepth(root->right))+1;
    }
    bool isBalanced(TreeNode* root) 
    {
        if(root==NULL) return true;
        
        int left=findDepth(root->left);
        int right=findDepth(root->right);
        
        return abs(left-right)<=1 && isBalanced(root->left) && isBalanced(root->right);
    }
    */
};