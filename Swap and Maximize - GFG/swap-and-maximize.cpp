// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
long long int maxSum(int arr[], int n);

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;++i)
			cin>>arr[i];
		cout<<maxSum(arr,n)<<endl;
	}
	return 0;
}// } Driver Code Ends


long long int maxSum(int arr[], int n)
{
    long long ans=0;
    sort(arr,arr+n);
    
    int l=0;
    int r=n-1;
    while(l<r)
    {
        ans+=arr[r]-arr[l];
        l++;
        if(l<r) ans+=arr[r]-arr[l];
        r--;
    }
    ans+=arr[l]-arr[0];
    return ans;
}