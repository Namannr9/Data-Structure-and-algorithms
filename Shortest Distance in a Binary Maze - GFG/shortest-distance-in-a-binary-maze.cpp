// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int shortestPath(vector<vector<int>> &grid, pair<int, int> source,pair<int, int> destination) 
    {
        int n=grid.size();
        int m=grid[0].size();
        queue<vector<int>> q;
        q.push({source.first,source.second,0});
        int dir[]={0,1,0,-1,0};
        while(q.size())
        {
            int x=q.front()[0];
            int y=q.front()[1];
            int dist=q.front()[2];
            q.pop();
            
            if(x==destination.first && y==destination.second) return dist;
            
            for(int i=0;i<4;i++)
            {
                int row=x+dir[i];
                int col=y+dir[i+1];
                if(row>=0 && row<n && col>=0 && col<m && grid[row][col]==1)
                {
                    q.push({row,col,dist+1});
                    grid[row][col]=0; // marking visited
                }
            }
            
        }
        return -1;
    }
};


// { Driver Code Starts.
int main() {

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }

        pair<int, int> source, destination;
        cin >> source.first >> source.second;
        cin >> destination.first >> destination.second;
        Solution obj;
        cout << obj.shortestPath(grid, source, destination) << endl;
    }
}
  // } Driver Code Ends