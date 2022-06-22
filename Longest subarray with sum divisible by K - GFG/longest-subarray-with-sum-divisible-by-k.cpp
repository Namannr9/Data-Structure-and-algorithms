// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int longSubarrWthSumDivByK(int arr[], int n, int k)
	{
	    unordered_map<int,int> mp;
	    int ans=0;
	    int need=0;
	    int sum=0;
	    for(int i=0;i<n;i++)
	    {
	        sum+=arr[i];
	        need=sum%k;
	        
	        if(need<0) need+=k; 
	        // this is because we have some negative integer also
	        // and to kept in map we have to convert it into some positive integer
	        
	        if(need==0) ans=i+1;
	        
	        else if(mp.find(need)==mp.end())  // it not found in map
	        {
	            mp[need]=i;
	        }
	        else   // found in map
	        {
	            ans=max(ans,i-mp[need]);
	        }
	    }
	    return ans;
	}
};

// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int n,k,i;
	cin>>n>>k; int arr[n];
	for(i=0;i<n;i++)
	cin>>arr[i];
	Solution ob;
	cout<<ob.longSubarrWthSumDivByK(arr, n, k)<<"\n";
	}
	return 0;	 
}
  // } Driver Code Ends