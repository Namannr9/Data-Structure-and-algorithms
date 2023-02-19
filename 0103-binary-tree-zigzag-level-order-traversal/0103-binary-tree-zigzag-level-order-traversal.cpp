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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) 
    {
        vector<vector<int>> ans;
        if(root==NULL) return ans;
        bool flip=false;
        queue<TreeNode *> q;
        q.push(root);
        
        while(q.size())
        {
            int sz=q.size();
            vector<int> tmp;
            while(sz--)
            {
                root=q.front();
                q.pop();
                tmp.push_back(root->val);
                if(root->left) q.push(root->left);
                if(root->right) q.push(root->right);
            }
            if(flip) reverse(tmp.begin(),tmp.end());
            ans.push_back(tmp);
            flip=!flip;
        }
        return ans;
        
    }
}; 