// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{
public:
    vector<int> candyStore(int candies[], int n, int k)
    {
        sort(candies,candies+n);
        int r=n%(k+1)==0 ? n/(k+1) : n/(k+1)+1;
        int minn=0;
        int maxx=0;
        for(int i=0;i<r;i++)
        {
            minn+=candies[i];
            maxx+=candies[n-i-1];
        }
        return {minn,maxx};
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, K;
        cin >> N >> K;
        int candies[N];

        for (int i = 0; i < N; i++)
        {
            cin >> candies[i];
        }

        Solution ob;
        vector<int> cost = ob.candyStore(candies, N, K);
        cout << cost[0] << " " << cost[1] << endl;
    }
    return 0;
}  // } Driver Code Ends