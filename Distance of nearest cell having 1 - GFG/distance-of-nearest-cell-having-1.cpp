// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution 
{
    public:
    //Function to find distance of nearest 1 in the grid for each cell.
	vector<vector<int>>nearest(vector<vector<int>>grid)
	{
	    int n=grid.size();
	    int m=grid[0].size();
	    vector<vector<int>> dist(n,vector<int>(m,INT_MAX));
	    queue<pair<int,int>> q;
	    for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<m;j++)
	        {
	            if(grid[i][j]==1)
	            {
	                q.push({i,j});
	                dist[i][j]=0;
	            }
	        }
	    }
	    
	    int dir[]={0,-1,0,1,0};
	    
	    while(q.size())
	    {
	        int r=q.front().first;
	        int c=q.front().second;
	        q.pop();
	        for(int i=0;i<4;i++)
	        {
	            int row=r+dir[i];
	            int col=c+dir[i+1];
	         
	            if(row>=0 && row<n && col>=0 && col<m)
	            {
	                if(dist[row][col]>1+dist[r][c])
	                {
	                    dist[row][col]=1+dist[r][c];
	                    q.push({row,col});
	                }
	            }
	            
	        }
	    }
	    return dist;
	    
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
		vector<vector<int>> ans = obj.nearest(grid);
		for(auto i: ans){
			for(auto j: i){
				cout << j << " ";
			}
			cout << "\n";
		}
	}
	return 0;
}  // } Driver Code Ends