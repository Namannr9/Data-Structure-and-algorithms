class Solution {
public:
    void solve(int index,int target,int n,vector<int> &nums,vector<int> &ds,vector<vector<int>> &ans)
    {
        if(target==0)
        {
            ans.push_back(ds);
            return;
        }
        
        for(int i=index;i<n;i++)
        {
            if(i!=index && nums[i]==nums[i-1]) continue;
            if(nums[i]>target) break;
            ds.push_back(nums[i]);
            solve(i+1,target-nums[i],n,nums,ds,ans);
            ds.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& nums, int target) 
    {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        vector<vector<int>> ans;
        vector<int> ds;
        solve(0,target,n,nums,ds,ans);
        return ans;
    }
};