// { Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++
class Solution{
    public:
    long long int findMaxProduct(vector<int>&a, int n)
    {
        if(n==1) return a[0];
        
        long long ans=1;
        long long maxNeg=INT_MIN;
        long long mod=1000000007;
        int neg=0;
        int zero=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]!=0)
            {
                if(a[i]<0)
                {
                    maxNeg=max(maxNeg,(long long)a[i]);
                    neg++;
                }
                ans=(ans*a[i])%mod;
            }
            else
            {
                zero++;
            }
        }
        
        if(zero==n) return 0;
        if(neg==1 && zero+neg==n) return 0;
        
        if(neg%2==0) return ans;
        
        return ans/maxNeg;
    }
};



// { Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    vector<int>arr(n);
	    for(int i = 0 ; i < n; i++){
	        cin >> arr[i];
	    }
	    Solution ob;
	    long long int ans = ob.findMaxProduct(arr, n);
	    cout << ans<<endl;
	}
	return 0;
}
  // } Driver Code Ends