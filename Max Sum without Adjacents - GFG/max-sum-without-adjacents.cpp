// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution{
public:	
    int solve(int *arr,int index,int *dp)
	{
	    if(index<0) return 0;
	    if(dp[index]!=-1) return dp[index];
	    int take=arr[index]+solve(arr,index-2,dp);
	    int notTake=solve(arr,index-1,dp);
	    return dp[index]=max(take,notTake);
	}
    int findMaxSum(int *arr, int n) 
	{
	    int *dp=new int[n+1];
	    for(int i=0;i<n+1;i++) dp[i]=-1;
	    return solve(arr,n-1,dp);
	}

	
/*
time limit exceed
int solve(int *arr,int index)
	{
	    if(index<0) return 0;
	    int take=arr[index]+solve(arr,index-2);
	    int notTake=solve(arr,index-1);
	    return max(take,notTake);
	}
	int findMaxSum(int *arr, int n) 
	{
	    return solve(arr,n-1);
	}
*/
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.findMaxSum(arr, n);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends