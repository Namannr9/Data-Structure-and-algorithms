// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

vector<long long> printFirstNegativeInteger(long long int arr[],
                                             long long int n, long long int k);

// Driver program to test above functions
int main() {
    long long int t, i;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        long long int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        long long int k;
        cin >> k;

        vector<long long> ans = printFirstNegativeInteger(arr, n, k);
        for (auto it : ans) cout << it << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends


vector<long long> printFirstNegativeInteger(long long int arr[],
                                             long long int n, long long int k) {
                                                 
    queue<long long int> q;
    vector<long long> ans;
    
    
    int l=0;
    int r=0;
    while(r<n)
    {
        if(arr[r]<0) q.push(arr[r]);
        
        if(r-l+1==k)  // for each window
        {
            if(q.size()) ans.push_back(q.front());
            else ans.push_back(0);
            
            if(arr[l]==q.front()) q.pop();
            
            l++; 
        }
        r++;
    }
    return ans;
    
                                                 
 }