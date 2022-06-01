// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int findMaxSum(int r, int c, vector<vector<int>> mat) {
        
        // code here
        int sum=0;
        int ans=0;
        if(r<3 || c<3) return -1;
        for(int i=0;i<r-2;i++)
        {
            for(int j=0;j<c-2;j++)
            {
                sum=mat[i][j]+mat[i][j+1]+mat[i][j+2]+
                            mat[i+1][j+1]+
                    mat[i+2][j]+mat[i+2][j+1]+mat[i+2][j+2];
                ans=max(sum,ans);
            }
            
        }
        return ans;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M, i, j;
        cin >> N >> M;
        vector<vector<int>> Mat(N, vector<int>(M));
        for (i = 0; i < N; i++)
            for (j = 0; j < M; j++) cin >> Mat[i][j];
        Solution ob;
        cout << ob.findMaxSum(N, M, Mat) << "\n";
    }
}  // } Driver Code Ends