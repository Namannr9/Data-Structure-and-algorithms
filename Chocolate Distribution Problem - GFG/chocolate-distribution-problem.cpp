// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    
    long long findMinDiff(vector<long long> nums, long long n, long long m)
    {
        // slide the window and trace the min diffrence between
        // nums[en] and nums[st]
        sort(nums.begin(),nums.end());
        long long mn=nums[m-1]-nums[0]; 
        
        int st=1;
        for(int en=m;en<n;en++,st++)
        {
            mn=min(mn,nums[en]-nums[st]);
        }
        return mn;
    
    }   
};

// { Driver Code Starts.
int main() {
	long long t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		vector<long long> a;
		long long x;
		for(long long i=0;i<n;i++)
		{
			cin>>x;
			a.push_back(x);
		}
		
		long long m;
		cin>>m;
		Solution ob;
		cout<<ob.findMinDiff(a,n,m)<<endl;
	}
	return 0;
}  // } Driver Code Ends