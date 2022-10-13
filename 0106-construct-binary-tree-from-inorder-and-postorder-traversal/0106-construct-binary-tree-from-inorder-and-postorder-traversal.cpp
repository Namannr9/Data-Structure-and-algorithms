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
    TreeNode *solve(int l,int r,int &postIndex,vector<int> &inorder,vector<int> &postorder)
    {
        if(l>r) return NULL;
        TreeNode *root=new TreeNode(postorder[postIndex--]);
        
        int index;
        for(int i=l;i<=r;i++)
        {
            if(inorder[i]==root->val)
            {
                index=i;
                break;
            }
        }
        
        root->right=solve(index+1,r,postIndex,inorder,postorder);
        root->left=solve(l,index-1,postIndex,inorder,postorder);
        
        return root;
        
        
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) 
    {
        int l=0;
        int r=postorder.size()-1;
        int postIndex=r;
        return solve(l,r,postIndex,inorder,postorder);
        
    }
};