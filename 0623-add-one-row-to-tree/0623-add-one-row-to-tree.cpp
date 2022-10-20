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
    TreeNode* addOneRow(TreeNode* root, int val, int depth) 
    {
        if(depth==1)
        {
            TreeNode *newNode=new TreeNode(val);
            newNode->left=root;
            return newNode;
        }
        
        TreeNode *mainRoot=root;
        queue<TreeNode *> q;
        q.push(root);
        int level=1;
        while(q.size())
        {
            int sz=q.size();
            level++;
            while(sz--)
            {
                root=q.front();
                q.pop();
                if(level==depth)
                {
                    TreeNode *newLeft=new TreeNode(val);
                    newLeft->left=root->left;
                    root->left=newLeft;
                    
                    TreeNode *newRight=new TreeNode(val);
                    newRight->right=root->right;
                    root->right=newRight;            
                }
                else
                { 
                    if(root->left) q.push(root->left);
                    if(root->right) q.push(root->right);
                }
            }
        }
        
        return mainRoot;
    }
};