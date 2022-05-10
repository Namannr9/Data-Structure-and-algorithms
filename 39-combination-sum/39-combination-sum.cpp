class Solution {
public:
    void solve(int i,int target,vector<int> &nums,vector<int> &ds,vector<vector<int>> &ans)
    {
        if(i<0 || target<=0)
        {
            if(target==0) ans.push_back(ds);
            return;
        }
        if(nums[i]<=target)
        {
            ds.push_back(nums[i]);
            solve(i,target-nums[i],nums,ds,ans);
            ds.pop_back();
        }
        solve(i-1,target,nums,ds,ans);
    }
     vector<vector<int>> combinationSum(vector<int>& nums, int target) 
    {
         int n=nums.size();
         vector<int> ds;
         vector<vector<int>> ans;
         solve(n-1,target,nums,ds,ans);
         return ans;
    }
    
};

