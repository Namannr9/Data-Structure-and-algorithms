class Solution {
public:
    int solve(vector<vector<int>> &pairs,int pre,int index,vector<vector<int>> &dp)
    {
        if(index>=pairs.size()) return 0;
        if(dp[index][pre+1001]!=-1) return dp[index][pre+1001];
        int x=0;
        if(pre<pairs[index][0])
        {
            x=solve(pairs,pairs[index][1],index+1,dp)+1;
        }
        int y=solve(pairs,pre,index+1,dp);
        return dp[index][pre+1001]=max(x,y);
    }
    int findLongestChain(vector<vector<int>>& pairs) 
    {
        sort(pairs.begin(),pairs.end());
        int n=pairs.size();
        vector<vector<int>> dp(n,vector<int>(2002,-1));
        int pre=-1001;
        int index=0;
        return solve(pairs,pre,index,dp);
    }
};