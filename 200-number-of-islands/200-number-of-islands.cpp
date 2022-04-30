class Solution 
{
public:
    // Breadth first solution
    int numIslands(vector<vector<char>>& grid) 
    {
        int n=grid.size();
        int m=grid[0].size();
        int dir[]={0,1,0,-1,0};
        
        queue<pair<int,int>> q;
        
        int count=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]=='1')
                {
                    count++;
                    grid[i][j]='0';
                    q.push({i,j});
                    while(q.size())
                    {
                        int row=q.front().first;
                        int col=q.front().second;
                        q.pop();
                        for(int k=0;k<4;k++)
                        {
                            int r=row+dir[k];
                            int c=col+dir[k+1];
                            if(r>=0 && c>=0 && r<n && c<m && grid[r][c]=='1')
                            {
                                grid[r][c]=0;
                                q.push({r,c});
                            }
                        }
                    }
                }
            }
        }
        
        
    return count;
    }
    
    // Depth first search
    /*
    void dfs(int i,int j,vector<vector<char>> &grid)
    {
        if(i<0 || j<0 || i>=grid.size() || j>=grid[0].size() || grid[i][j]!='1') return;
        grid[i][j]='0';
        dfs(i-1,j,grid);
        dfs(i,j+1,grid);
        dfs(i+1,j,grid);
        dfs(i,j-1,grid);
    }
    int numIslands(vector<vector<char>>& grid) 
    {
        int n=grid.size();
        int m=grid[0].size();
        int count=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]!='0')
                {
                    dfs(i,j,grid);
                    count++;
                }    
            }
            
        }
        return count;
        
    }
    */
};