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
    // DFS
    void solve(TreeNode *root,int level,vector<vector<int>> &ans)
    {
        if(root==NULL) return;
        if(level==ans.size()) ans.push_back(vector<int> ());
        ans[level].push_back(root->val);
        solve(root->left,level+1,ans);
        solve(root->right,level+1,ans);
    }
    vector<vector<int>> levelOrder(TreeNode* root) 
    {
        vector<vector<int>> ans;
        solve(root,0,ans);
        return ans;
    }
    /*
    BFS
    vector<vector<int>> levelOrder(TreeNode* root) 
    {
        vector<vector<int>> ans;
        if(root==NULL) return ans;
        queue<TreeNode *> q;
        q.push(root);
        while(q.size())
        {
            vector<int> tmp;
            int count=q.size();
            for(int i=0;i<count;i++)
            {
                root=q.front();
                q.pop();
                tmp.push_back(root->val);
                if(root->left) q.push(root->left);
                if(root->right) q.push(root->right);
            }
            ans.push_back(tmp);
            
        }
        return ans;
    }
    */
};