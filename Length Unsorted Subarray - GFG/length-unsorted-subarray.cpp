// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	vector<int> printUnsorted(int nums[], int n) 
	{
	    int right=0;
	    int left=0;
	    int lmin=INT_MAX;
	    int lmax=INT_MIN;
	    for(int i=0;i<n;i++)
	    {
	        if(nums[i]<lmax) right=i;
	        lmax=max(lmax,nums[i]);
	    }
	    for(int i=n-1;i>=0;i--)
	    {
	        if(nums[i]>lmin) left=i;
	        lmin=min(nums[i],lmin);
	    }
	    return {left,right};
	}
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
        auto ans = ob.printUnsorted(arr, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
  // } Driver Code Ends