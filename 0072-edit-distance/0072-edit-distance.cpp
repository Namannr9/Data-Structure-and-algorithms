class Solution {
public:
    int dp[501][501];
    int solve(string x,string y,int n,int m)
    {
        if(n==-1) return m+1;
        if(m==-1) return n+1;
        
        if(dp[n][m]!=-1) return dp[n][m];
        if(x[n]==y[m]) return dp[n][m]=solve(x,y,n-1,m-1);
        
        int a=solve(x,y,n-1,m-1);
        int b=solve(x,y,n-1,m);
        int c=solve(x,y,n,m-1);
        return dp[n][m]=1+min(a,min(b,c));
    }
    int minDistance(string x, string y) 
    {
            memset(dp,-1,sizeof(dp));
            return solve(x,y,x.size()-1,y.size()-1);
    }
};