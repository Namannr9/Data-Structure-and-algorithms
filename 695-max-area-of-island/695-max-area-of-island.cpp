class Solution {
public:
    void solve(int i,int j,int n,int m,int &tmp,vector<vector<int>> &grid)
    {
        if(!grid[i][j]) return;
        grid[i][j]=0;
        tmp++;
        
        if(i+1<n) solve(i+1,j,n,m,tmp,grid);
        if(j+1<m) solve(i,j+1,n,m,tmp,grid);
        if(i>0) solve(i-1,j,n,m,tmp,grid);
        if(j>0) solve(i,j-1,n,m,tmp,grid);
        
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) 
    {
        int ans=0;
        int n=grid.size();
        int m=grid[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                int tmp=0;
                if(grid[i][j])
                {
                    solve(i,j,n,m,tmp,grid);
                    ans=max(ans,tmp);
                }
            }
        }
        return ans;
        
    }
};