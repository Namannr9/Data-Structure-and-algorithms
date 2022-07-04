// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function template for C++

class Solution{
    public:
    void solve(int i,int j,int n,vector<vector<int>> &mat,vector<int> &dir,vector<string> &ans,vector<vector<int>> &vis,string move)
    {
        if(i==n-1 && j==n-1)
        {
            ans.push_back(move);
           // cout<<"hellow"<<endl;
            return;
        }
        
        string tmp="RDLU";
        for(int k=0;k<4;k++)
        {
            int row=i+dir[k];
            int col=j+dir[k+1];
            
            if(row>=0 && row<n && col>=0 && col<n && mat[row][col]==1 && vis[row][col]==0)
            {
                vis[i][j]=1;
                
                solve(row,col,n,mat,dir,ans,vis,move+tmp[k]);
                vis[i][j]=0;
            }
        }
    }
    vector<string> findPath(vector<vector<int>> &mat, int n) 
    {
        vector<int> dir={0,1,0,-1,0};
        vector<vector<int>> vis(n,vector<int>(n,0));
        vector<string> ans;
        
        if(mat[0][0]==1) solve(0,0,n,mat,dir,ans,vis,"");
        
        return ans;
        
    }
};

    


// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends