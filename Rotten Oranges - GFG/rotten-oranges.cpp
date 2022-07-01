// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution 
{
    public:
    //Function to find minimum time required to rot all oranges. 
    int orangesRotting(vector<vector<int>>& grid) 
    {
        int n=grid.size();
        int m=grid[0].size();
        
        queue<pair<int,int>> q;
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==2)
                {
                    q.push({i,j});
                }
            }
        }
        
        q.push({-1,-1}); // add marker at end of queue
        
        int dir[]={0,-1,0,1,0};
        int count=0;
        
        while(q.size())
        {
            int r=q.front().first;
            int c=q.front().second;
            q.pop();
            if(r==-1 && c==-1)
            {
                if(q.size()==0) break;
                else 
                {
                    count++;
                    q.push({-1,-1}); //again add marker at end of queue
                }
            }
            else
            {
                for(int i=0;i<4;i++)
                {
                    int row=r+dir[i];
                    int col=c+dir[i+1];
                    
                    if(row>=0 && row<n && col>=0 && col<m && grid[row][col]==1)
                    {
                        grid[row][col]=2;
                        q.push({row,col});
                    }
                }
                
            }
        
            
        }
        
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==1) return -1;
            }
                
        }
            
        return count;
    }
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>grid(n, vector<int>(m, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		int ans = obj.orangesRotting(grid);
		cout << ans << "\n";
	}
	return 0;
}  // } Driver Code Ends