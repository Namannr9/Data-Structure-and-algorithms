class Solution {
public:
    int solve(int target,vector<int> &dp,vector<int> &nums)
    {
        if(target==0) return  1;
        if(dp[target]!=-1) return dp[target];
        int ans=0;
        for(int num : nums)
        {
            if(num<=target)
            {
                ans+=solve(target-num,dp,nums);
            }
        }
        return dp[target]=ans;
    }
    int combinationSum4(vector<int>& nums, int target)
    {
        vector<int> dp(target+1,-1);
        return solve(target,dp,nums);
    }
};
/*
int solve(int target,vector<int> &nums)
    {
        if(target==0) return 1;
        int ans=0;
        for(int num : nums)
        {
            if(num<=target)
            {
                ans+=solve(target-num,nums);
            }
        }
        return ans;
    }
    int combinationSum4(vector<int>& nums, int target)
    {
        return solve(target,nums);
    }
*/