class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) 
    {
        int n=grid.size();
        vector<int> row(n);
        vector<int> col(n);
        
        for(int i=0;i<n;i++)
        {
            int mx=grid[i][0];
            for(int j=0;j<n;j++)
            {
                if(mx<grid[i][j]) mx=grid[i][j];
            }
            row[i]=mx;
        }
        
        for(int i=0;i<n;i++)
        {
            int mx=grid[0][i];
            for(int j=0;j<n;j++)
            {
                if(mx<grid[j][i]) mx=grid[j][i];
            }
            col[i]=mx;
        }
        int ans=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                int mn=min(row[i],col[j]);
                ans+=abs(mn-grid[i][j]);
            }
        }
        return ans;
    }
};