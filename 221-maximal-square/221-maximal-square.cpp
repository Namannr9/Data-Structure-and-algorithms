class Solution {
public:
    int solve(int i,int j,int n,int m,vector<vector<char>> &mat,vector<vector<int>> &dp)
    {
        if(i<0 || i>=n || j<0 || j>=m || mat[i][j]=='0') return 0;
        
        if(dp[i][j]!=-1) return dp[i][j];
        int up=solve(i-1,j,n,m,mat,dp);
        int dig=solve(i-1,j-1,n,m,mat,dp);
        int left=solve(i,j-1,n,m,mat,dp);
        
        return dp[i][j]=1+min(up,min(dig,left));
        
    }
    int maximalSquare(vector<vector<char>>& matrix) 
    {
        int n=matrix.size();
        int m=matrix[0].size();
        int ans=0;
        vector<vector<int>> dp(n+1,vector<int>(m+1,-1));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                int tmp=solve(i,j,n,m,matrix,dp);
                tmp=tmp*tmp;
                ans=max(ans,tmp);
            }
        }
        return ans;
    }
};
/*
simple recursion
    int solve(int i,int j,int n,int m,vector<vector<char>> &mat)
    {
        if(i<0 || i>=n || j<0 || j>=m || mat[i][j]=='0') return 0;
        
        int up=solve(i-1,j,n,m,mat);
        int dig=solve(i-1,j-1,n,m,mat);
        int left=solve(i,j-1,n,m,mat);
        
        return 1+min(up,min(dig,left));
        
    }
    int maximalSquare(vector<vector<char>>& matrix) 
    {
        int n=matrix.size();
        int m=matrix[0].size();
        int ans=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                int tmp=solve(i,j,n,m,matrix);
                tmp=tmp*tmp;
                ans=max(ans,tmp);
            }
        }
        return ans;
    }
*/