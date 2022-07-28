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
    TreeNode *solve(int l,int r,int &preIndex,vector<int> &inorder,vector<int> &preorder)
    {
        if(l>r) return NULL;
        TreeNode *root=new TreeNode(preorder[preIndex++]);
        int index=0;
        for(int i=l;i<=r;i++)
        {
            if(inorder[i]==root->val)
            {
                index=i;
                break;
            }
        }
        root->left=solve(l,index-1,preIndex,inorder,preorder);
        root->right=solve(index+1,r,preIndex,inorder,preorder);
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) 
    {
        int l=0;
        int r=preorder.size()-1;
        int preIndex=0;
        return solve(l,r,preIndex,inorder,preorder);
    }
};