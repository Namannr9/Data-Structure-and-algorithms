// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:

    bool find(int index,int r,int c,int n,int m,string word,vector<vector<char>> grid,int xdir,int ydir)
    {
        if(index==word.size()) return true;
        
        if(r>=0 && r<n && c>=0 && c<m && grid[r][c]==word[index])
        {
            return find(index+1,r+xdir,c+ydir,n,m,word,grid,xdir,ydir);
        }
        return false;
        
    }
	vector<vector<int>>searchWord(vector<vector<char>>grid, string word)
	{
	   
	    int n=grid.size();
	    int m=grid[0].size();
	    vector<vector<int>> ans;
	    int x[]={1,-1,0,0,1,-1,-1,1};
	    int y[]={0,0,1,-1,-1,-1,1,1};
	    for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<m;j++)
	        {
	            if(grid[i][j]==word[0])
	            {
    	            for(int dir=0;dir<8;dir++)
    	            {
    	                if(find(1,i+x[dir],j+y[dir],n,m,word,grid,x[dir],y[dir]))
    	                {
    	                    ans.push_back({i,j});
    	                    break;
    	                }
    	            }
	            }
	        }
	    }
	    return ans;
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<char>>grid(n, vector<char>(m,'x'));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++)
				cin >> grid[i][j];
		}
		string word;
		cin >> word;
		Solution obj;
		vector<vector<int>>ans = obj.searchWord(grid, word);
		for(auto i: ans){
			for(auto j: i)
				cout << j << " ";
			cout << "\n";
		}
		if(ans.size() == 0)
		{
		    cout<<"-1\n";
		}
	}
	return 0;
}  // } Driver Code Ends