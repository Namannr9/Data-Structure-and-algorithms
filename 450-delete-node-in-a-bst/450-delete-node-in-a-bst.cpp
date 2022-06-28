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
    TreeNode* deleteNode(TreeNode* root, int key) 
    {
        if(root==NULL) return root;
        
        if(root->val > key)
        {
            root->left=deleteNode(root->left,key);
            return root;
        }
        if(root->val < key)
        {
            root->right=deleteNode(root->right,key);
            return root;
        }
        else   // we are at node which we want to delete node
        {
            // case of one child
            if(root->left==NULL) return root->right;   
            if(root->right==NULL) return root-> left;
            
            // if exist two child
            
            TreeNode *parent=root;
            TreeNode *suc=root->right;
            
            while(suc->left)
            {
                parent=suc;
                suc=suc->left;
            }
            
            
            if(parent==root)
            {
                suc->left=root->left;
            }
            else
            {
                 parent->left=suc->right;
                suc->left=root->left;
                suc->right=root->right;
            }
            return suc;
            
        }
        return NULL;
        
    }
};