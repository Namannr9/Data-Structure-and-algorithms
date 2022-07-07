// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    void solve(string tmp,string s,vector<string>&dict,vector<string> &ans)
    {
        if(s.size()==0)
        {
            tmp.erase(tmp.begin()+tmp.size()-1);
            ans.push_back(tmp);
            return;
        }
        
        for(int i=1;i<=s.size();i++)
        {
            string left=s.substr(0,i);
            if(find(dict.begin(),dict.end(),left)!=dict.end())
            {
                string right=s.substr(i);
                solve(tmp+left+" ",right,dict,ans);
            }
        }
    }
    vector<string> wordBreak(int n, vector<string>& dict, string s)
    {
        vector<string> ans;
        string tmp="";
        solve(tmp,s,dict,ans);
        return ans;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        vector<string> dict;
        string s;
        cin>>n;
        for(int i = 0;i < n;i++){
            cin>>s;
            dict.push_back(s);
        }
        cin>>s;
        
        Solution ob;
        vector<string> ans = ob.wordBreak(n, dict, s);
        if(ans.size() == 0)
            cout<<"Empty\n";
        else{
            sort(ans.begin(), ans.end());
            for(int i = 0;i < ans.size();i++)
                cout<<"("<<ans[i]<<")";
            cout<<endl;
        }
    }
    return 0;
}  // } Driver Code Ends