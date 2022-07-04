class Solution {
public:
    void solve(int index,int target,vector<int> &ds,vector<int> &nums,vector<vector<int>> &ans)
    {
        if(target==0)
        {
            ans.push_back(ds);
            return;
        }
        
        for(int i=index;i<nums.size();i++)
        {
            if(i!=index && nums[i]==nums[i-1]) continue;
            
            if(nums[i]>target) break;
            
            ds.push_back(nums[i]);
            solve(i+1,target-nums[i],ds,nums,ans);
            ds.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& nums, int target) 
    {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans; 
        vector<int> ds;
        solve(0,target,ds,nums,ans);
        return ans; 
    }
};