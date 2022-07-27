class Solution {
public:
    int solve(int left,int right,vector<vector<int>> &dp)
    {
        if(left>=right) return 1;
        if(dp[left][right]!=-1) return dp[left][right];
        int count=0;
        for(int root=left;root<=right;root++)
        {
            count+=solve(left,root-1,dp)*solve(root+1,right,dp);
        }
        return dp[left][right]=count;
    }
    int numTrees(int n)
    {
        int left=1;
        int right=n;
        vector<vector<int>> dp(n+1,vector<int>(n+1,-1));
        return solve(left,right,dp);
        
    }
    /*
    int solve(int left,int right)
    {
        if(left>=right) return 1;
        
        int count=0;
        for(int root=left;root<=right;root++)
        {
            count+=solve(left,root-1)*solve(root+1,right);
        }
        return count;
    }
    int numTrees(int n) {
        int left=1;
        int right=n;
        return solve(left,right);
    }
    */
};