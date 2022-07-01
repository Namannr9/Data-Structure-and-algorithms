// { Driver Code Starts
#include <bits/stdc++.h>
#include<stdio.h>
#include<math.h>
using namespace std;

 // } Driver Code Ends
class Solution{
  public:
    int minDiff(int arr[], int n, int k)
    {
        sort(arr,arr+n);
        int ans=INT_MAX;
        for(int i=k-1;i<n;i++)
        {
            ans=min(ans,(arr[i]-arr[i-k+1]));
        }
        return ans;
    }
};

// { Driver Code Starts.

int main()
{
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		int a[n];
		for(int i=0;i<n;++i)
			cin>>a[i];
		Solution obj;
		cout<<obj.minDiff(a,n,k)<<endl;
	}
	return 0;
}  // } Driver Code Ends