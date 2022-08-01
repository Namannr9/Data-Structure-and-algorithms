class Solution {
public:
    int solve(int i,int j,int r,int c,vector<vector<int>> &dp)
    {
        if(i==r-1 && j==c-1) return 1;
        if(i>=r || j>=c) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        return dp[i][j]=solve(i+1,j,r,c,dp)+solve(i,j+1,r,c,dp);
    }
    int uniquePaths(int n, int m) 
    {
        int i=0;
        int j=0;
        vector<vector<int>> dp(n+1,vector<int>(m+1,-1));
        return solve(i,j,n,m,dp);
    }
};