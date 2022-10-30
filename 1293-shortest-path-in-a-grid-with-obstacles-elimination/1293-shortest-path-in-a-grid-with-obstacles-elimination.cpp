class Solution {
public:
    int shortestPath(vector<vector<int>>& grid, int k) 
    {
        int n=grid.size();
        int m=grid[0].size();
        
        vector<vector<int>> vis(n,vector<int>(m,-1));
        
        queue<vector<int>> q;
        q.push({0,0,0,k});
        // current row  col  len  k
        while(q.size())
        {
            vector<int> tmp=q.front();
            q.pop();
            
            int x=tmp[0];
            int y=tmp[1];
            int len=tmp[2];
            int k=tmp[3];
            if(x<0 || x>=n || y<0 || y>=m) continue;
            
            if(x==n-1 && y==m-1) return len;    // we reach the end 
            
            if(grid[x][y]==1)   // obstacle found
            {
                if(k>0) k--;
                else continue;
            }
            
            if(vis[x][y]!=-1 && vis[x][y]>=k) continue;
            
            vis[x][y]=k;
            
            len++;   //move one step
            
            q.push({x+1,y,len,k});
            q.push({x-1,y,len,k});
            q.push({x,y+1,len,k});
            q.push({x,y-1,len,k});
        }
        
        return -1;
    }
};