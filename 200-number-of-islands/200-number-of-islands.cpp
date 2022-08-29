class Solution {
public:
    void solve(int i,int j,int n,int m,vector<vector<char>> &grid)
    {
        if(i>=n || j>=m || i<0 || j<0 || grid[i][j]!='1') return;
        grid[i][j]='0';
        
        solve(i+1,j,n,m,grid);
        solve(i-1,j,n,m,grid);
        solve(i,j+1,n,m,grid);
        solve(i,j-1,n,m,grid);
    }
    int numIslands(vector<vector<char>>& grid) 
    {
        int ans=0;
        int n=grid.size();
        int m=grid[0].size();
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]=='1')
                {
                    ans++;
                    solve(i,j,n,m,grid);
                }
            }
        }
        return ans;
    }
};