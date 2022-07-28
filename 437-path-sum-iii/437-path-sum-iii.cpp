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
    void solve(TreeNode *root,long sum,int targetSum,int &count,unordered_map<long,int> mp)
    {
        if(root==NULL) return;
        sum+=root->val;
        if(sum==targetSum) count++;
        if(mp.find(sum-targetSum)!=mp.end()) count+=mp[sum-targetSum];
        mp[sum]++;
        solve(root->left,sum,targetSum,count,mp);
        solve(root->right,sum,targetSum,count,mp);
        mp[sum]--;
        
    }
    int pathSum(TreeNode* root, int targetSum) 
    {
        unordered_map<long ,int > mp;
        int count=0;
        solve(root,0,targetSum,count,mp);
        return count;
    }
    
    /*
    Time complexity O(n^2)
    void findSum(TreeNode *root,long sum,int &ans)
    {
        if(root==NULL) return;
        if(root->val==sum) ans++;
        findSum(root->left,sum-root->val,ans);
        findSum(root->right,sum-root->val,ans);
    }
    void preorder(TreeNode *root,long sum,int &ans)
    {
        if(root==NULL) return;
        findSum(root,sum,ans);
        preorder(root->left,sum,ans);
        preorder(root->right,sum,ans);
        
    }
    int pathSum(TreeNode* root, int targetSum) 
    {
        int ans=0;
        preorder(root,targetSum,ans);
        return ans;
    }
    */
};