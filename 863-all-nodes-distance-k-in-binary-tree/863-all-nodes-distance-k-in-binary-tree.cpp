/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    void findParent(TreeNode *root,unordered_map<TreeNode *,TreeNode *> &mp)
    {
        if(root==NULL) return ;
        if(root->left)
        {
            mp[root->left]=root;
            findParent(root->left,mp);
        }
        if(root->right)
        {
            mp[root->right]=root;
            findParent(root->right,mp);
        }
    }
    
    void solve(TreeNode *root,int k,unordered_map<TreeNode *,TreeNode *> &mp,unordered_set<TreeNode *> &visit,vector<int> &ans)
    {
        if(visit.find(root)!=visit.end()) return;
        visit.insert(root);
        
        if(k==0) 
        {
            ans.push_back(root->val);
            return;
        }
        if(root->left) solve(root->left,k-1,mp,visit,ans);
        
        if(root->right) solve(root->right,k-1,mp,visit,ans);
        
        TreeNode *parent=mp[root];
        if(parent) solve(parent,k-1,mp,visit,ans);
    }
    
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) 
    {
        vector<int> ans;
        unordered_map<TreeNode *,TreeNode *> mp;
        unordered_set<TreeNode *> visit;
        
        findParent(root,mp);
        solve(target,k,mp,visit,ans);
        return ans;
    }
};