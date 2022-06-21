// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    int findSubString(string s)
    {
        unordered_map<char,int> mp;
        set<char> st;
        int n=s.size();
        for(int i=0;i<n;i++) st.insert(s[i]);
        int distinct=st.size();
        int i=0;
        int j=1;
        mp[s[0]]++;
        int count=1;
        int ans=INT_MAX;
        while(i<=j && j<n)
        {
            if(count<distinct)
            {
                if(mp[s[j]]==0) count++; // new character come
                mp[s[j]]++;
                j++; // expand window
            }
            else if(count==distinct) // reduce the size of window from backside
            {
                ans=min(ans,j-i);
                if(mp[s[i]]==1) count--;
                mp[s[i]]--;
                i++;
            }
        }
        
        while(count==distinct)  // this loop is used to find minium ans from i to j
        {
            ans=min(ans,j-i);
            if(mp[s[i]]==1) break;  // because we cannot remove this one
            mp[s[i]]--;
            i++;
        }
        
        return ans;
        
        
        
    }
};

// { Driver Code Starts.
// Driver code
int main() {
    int t;
    cin >> t;
    while (t--) {

        string str;
        cin >> str;
        Solution ob;
        cout << ob.findSubString(str) << endl;
    }
    return 0;
}  // } Driver Code Ends