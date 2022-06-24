// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution {
  public:
    bool isPossible(long long a[], long long b[], long long n, long long k) {
        // Your code goes here
        sort(a,a+n);
        sort(b,b+n);
        
        int i=0;
        int j=n-1;
        //reverseing the second array
        
        while(i<j) swap(b[i++],b[j--]);
        
        
        for(int i=0;i<n;i++) if(a[i]+b[i]<k) return false;
       
        return true;
        
    }
};

// { Driver Code Starts.
int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;
        long long a[n + 2], b[n + 2];
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];
        Solution ob;
        cout << ob.isPossible(a, b, n, k) << endl;
    }
    return 0;
}
  // } Driver Code Ends