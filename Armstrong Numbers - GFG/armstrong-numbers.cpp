//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string armstrongNumber(int num)
    {
        int tmp=num;
        int dc=0;
        while(tmp)
        {
            tmp=tmp/10;
            dc++;
        }
        tmp=num;
        int sum=0;
        while(tmp)
        {
            int d=tmp%10;
            tmp=tmp/10;
            sum+=pow(d,dc);
        }
        
    if(sum==num) return "Yes";
    return "No";
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.armstrongNumber(n) << endl;
    }
    return 0;
}

// } Driver Code Ends