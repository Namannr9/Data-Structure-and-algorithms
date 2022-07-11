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
    void inorder(TreeNode *root,vector<int> &nodes)
    {
        if(root==NULL) return;
        inorder(root->left,nodes);
        nodes.push_back(root->val);
        inorder(root->right,nodes);
    }
    
    TreeNode* solve(vector<int> &nodes,int l,int r)
    {
        if(l>r) return NULL;
        
        int mid=(l+r)/2;
        TreeNode *root=new TreeNode(nodes[mid]);
        root->left=solve(nodes,l,mid-1);
        root->right=solve(nodes,mid+1,r);
        return root;

        
    }
    TreeNode* balanceBST(TreeNode* root) 
    {
        vector<int> nodes;
        inorder(root,nodes);
        
        return solve(nodes,0,nodes.size()-1);
    }
};