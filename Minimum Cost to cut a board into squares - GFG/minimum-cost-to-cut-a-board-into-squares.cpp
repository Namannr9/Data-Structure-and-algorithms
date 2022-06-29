// { Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution {
public:
    int minimumCostOfBreaking(vector<int> x, vector<int> y, int n, int m)
    {
        sort(x.rbegin(),x.rend());
        sort(y.rbegin(),y.rend());
        
        int i=0;
        int j=0;
        
        int hc=1;
        int vc=1;
        int cost=0;
        while(i<n && j<m)
        {
            if(x[i]>y[j])
            {
                cost+=vc*x[i];
                hc++;
                i++;
            }
            else
            {
                cost+=hc*y[j];
                vc++;
                j++;
            }
        }
        
        while(i<n)
        {
            cost+=vc*x[i];
            i++;
        }
        while(j<m)
        {
            cost+=hc*y[j];
            j++;
        }
        return cost;
        
    }
};



// { Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int m, n;
	    cin >> m >> n;
	    vector<int>X(m - 1), Y(n - 1);
	    for(int i = 0; i < m - 1; i++){
	        cin >> X[i];
	    }
	    for(int i = 0; i < n - 1; i++){
	        cin >> Y[i];
	    }
	    Solution ob;
	    int ans = ob.minimumCostOfBreaking(X, Y, m - 1, n - 1);
	    cout << ans<<endl;
	}
	return 0;
}
  // } Driver Code Ends