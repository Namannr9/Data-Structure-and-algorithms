// { Driver Code Starts
// Initial template for C++
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function template for c++
class Solution {
  public:
    int findMaxLen(string s) 
    {
        stack<int> stk;
        stk.push(-1);
        int ans=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
            {
                stk.push(i);
            }
            else
            {
                stk.pop();
                if(stk.size()==0)
                {
                    stk.push(i);
                }
                else
                {
                    int len=i-stk.top();
                    ans=max(ans,len);
                }
            }
        }
        return ans;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S; 
        Solution ob;
        cout << ob.findMaxLen(S) << endl;
    }
    return 0;
}
  // } Driver Code Ends