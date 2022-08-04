class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) 
    {
        int ans=0;
        int n=grid.size();
        int m=grid[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                
                if(grid[i][j]) // if any side water is present so it must have boundary
                {
                 
                    if(i==0 || !grid[i-1][j]) ans++; // up
                    if(j==0 || !grid[i][j-1]) ans++;  // left
                    if(i==n-1 || !grid[i+1][j]) ans++; // down
                    if(j==m-1 || !grid[i][j+1]) ans++;  // right
                }
            }
        }
        return ans;
    }
};