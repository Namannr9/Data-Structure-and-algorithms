class Solution {
public:
    int solve(int i,int j,int n,int m,vector<vector<int>> &matrix,vector<vector<int>> &dp)
    {
        if(i<0 || j<0 || i>=n || j>=m) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        
        int dir[4][2]={{1,0},{-1,0},{0,-1},{0,1}};
        
        int path=1;
        for(int k=0;k<4;k++)
        {
            int r=i+dir[k][0];
            int c=j+dir[k][1];
            
           if(r<n && c<m && r>=0 && c>=0 && matrix[r][c]>matrix[i][j])
           {
                path=max(path,solve(r,c,n,m,matrix,dp)+1);
            }
            
        }
        return dp[i][j]=path;
    }
    
    int longestIncreasingPath(vector<vector<int>>& matrix) 
    {
        int n=matrix.size();
        int m=matrix[0].size();
        vector<vector<int>> dp(n+1,vector<int>(m+1,-1));
        
        int ans=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(dp[i][j]==-1)
                {
                    ans=max(ans,solve(i,j,n,m,matrix,dp));    
                }
                
            }
        }
        return ans;
    }
};