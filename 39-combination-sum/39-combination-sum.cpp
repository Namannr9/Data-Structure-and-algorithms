class Solution {
public:
    void solve(int n,vector<int> &nums,int target,vector<int>& ds,vector<vector<int>> &ans)
    {
        if(n<0 || target<0)
        {
            if(target==0)
            {
                ans.push_back(ds);
                
            }
            return;
        }
        
        if(nums[n]<=target)
        {
            ds.push_back(nums[n]);
            solve(n,nums,target-nums[n],ds,ans);
            ds.pop_back();
        }
        solve(n-1,nums,target,ds,ans);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) 
    {
        int n=candidates.size();
        vector<vector<int>> ans;
        vector<int> ds;
        solve(n-1,candidates,target,ds,ans);    
        return ans;
    }
};