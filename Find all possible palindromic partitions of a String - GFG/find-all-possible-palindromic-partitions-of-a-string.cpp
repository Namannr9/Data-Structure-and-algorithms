// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    bool isPalindrome(string s,int st,int ed)
    {
        while(st<ed)
        {
            if(s[st++]!=s[ed--]) return false;
        }
        return true;
    }
    void solve(int index,string s,vector<string> &ds,vector<vector<string>> &ans)
    {
        if(index==s.size())
        {
            ans.push_back(ds);
            return;
        }
        
        for(int i=index;i<s.size();i++)
        {
            if(isPalindrome(s,index,i))
            {
                ds.push_back(s.substr(index,i-index+1));
                solve(i+1,s,ds,ans);
                ds.pop_back();
            }
        }
    }
    vector<vector<string>> allPalindromicPerms(string s) 
    {
        vector<vector<string>> ans;
        vector<string> ds;
        solve(0,s,ds,ans);
        return ans;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        
        cin>>S;

        Solution ob;
        vector<vector<string>> ptr = ob.allPalindromicPerms(S);
        
        for(int i=0; i<ptr.size(); i++)
        {
            for(int j=0; j<ptr[i].size(); j++)
            {
                cout<<ptr[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}  // } Driver Code Ends