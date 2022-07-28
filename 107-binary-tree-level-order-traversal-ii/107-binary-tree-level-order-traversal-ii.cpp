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
    //DFS
   void solve(TreeNode *root,int level,int depth,vector<vector<int>> &ans)
   {
       if(root==NULL) return;
       ans[depth-level-1].push_back(root->val);
       solve(root->left,level+1,depth,ans);
       solve(root->right,level+1,depth,ans);
       
   }
   int getDepth(TreeNode *root)
   {
       if(root==NULL) return 0;
       return max(getDepth(root->left),getDepth(root->right))+1;
   }
   vector<vector<int>> levelOrderBottom(TreeNode* root) 
   {
       int depth=getDepth(root);
       vector<vector<int>> ans(depth);
       solve(root,0,depth,ans);
       return ans;
        
   }
    
   /*
   BFS
   vector<vector<int>> levelOrderBottom(TreeNode* root) 
    {
        vector<vector<int>> ans;
        if(root==NULL) return ans;
        queue<TreeNode *> q;
        q.push(root);
        while(q.size())
        {
            int count=q.size();
            vector<int> tmp;
            while(count--)
            {
                root=q.front();
                q.pop();
                tmp.push_back(root->val);
                if(root->left) q.push(root->left);
                if(root->right) q.push(root->right);
            }
            ans.insert(ans.begin(),tmp);
        }
        return ans;
    }
    */
};