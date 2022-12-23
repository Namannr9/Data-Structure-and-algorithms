class Solution {
public:
    int solve(int index,int buy,int n,vector<int> prices,vector<vector<int>> &dp)
    {
        if(index>=n) return 0;
        
        if(dp[index][buy]!=-1) return dp[index][buy];
        //int profit=0;
        if(buy)
        {
             return dp[index][buy]=max(solve(index+1,0,n,prices,dp)-prices[index],solve(index+1,1,n,prices,dp));
        }
        else
        {
            return dp[index][buy]=max(solve(index+2,1,n,prices,dp)+prices[index],
                             solve(index+1,0,n,prices,dp));
        }
    }
    int maxProfit(vector<int>& prices) 
    {
        int n=prices.size();
        vector<vector<int>> dp(n,vector<int>(2,-1));
        return solve(0,1,n,prices,dp);
    }
};