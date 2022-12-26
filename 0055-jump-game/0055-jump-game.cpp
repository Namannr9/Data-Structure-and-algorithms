class Solution {
public:
    int solve(int index,vector<int> &nums,vector<int> &dp)
    {

        if(index>=nums.size()-1) return 1;
        if(dp[index]!=-1) return dp[index];
        for(int i=1;i<=nums[index];i++)
        {
            if(solve(index+i,nums,dp)) 
            {
                return dp[index]=1;
            }
        }
        return dp[index]=0;
        
    }
    bool canJump(vector<int>& nums) 
    {
        vector<int> dp(nums.size()+1,-1);
        return solve(0,nums,dp);
    }
};