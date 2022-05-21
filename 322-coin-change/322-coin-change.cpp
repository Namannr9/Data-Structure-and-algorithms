class Solution {
public:
    int coinChange(vector<int>& arr, int sum) 
    {
        int n=arr.size();
     
	   int dp[n+1][sum+1];
	   for(int i=0;i<sum+1;i++) dp[0][i]=INT_MAX-1;
	   for(int i=0;i<n+1;i++) dp[i][0]=0;
	   
	   for(int i=1;i<n+1;i++)
	   {
	       for(int j=1;j<sum+1;j++)
	       {
	           if(arr[i-1]<=j)
	           {
	               dp[i][j]=min(1+dp[i][j-arr[i-1]],dp[i-1][j]);
	           }
	           else
	           {
	               dp[i][j]=dp[i-1][j];
	           }
	       }
	   }
	   if(dp[n][sum]==INT_MAX-1) return -1;
	   else return dp[n][sum];
	} 
    
};