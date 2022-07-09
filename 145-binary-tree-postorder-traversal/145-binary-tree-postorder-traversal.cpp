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
    vector<int> postorderTraversal(TreeNode* root) 
    {
        vector<int> ans;
        if(root==NULL) return ans;    
        stack<TreeNode *> stk;
        stack<int> out;
        stk.push(root);
        while(stk.size())
        {
            root=stk.top();
            stk.pop();
            
            out.push(root->val);
            
            if(root->left) stk.push(root->left);
            if(root->right) stk.push(root->right);
        }
        
        while(out.size())
        {
            ans.push_back(out.top());
            out.pop();
        }
        return ans;
    }
};