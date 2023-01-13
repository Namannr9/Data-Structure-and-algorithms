class Solution {
public:
    int solve(int node,int &ans,string &s,vector<vector<int>> &adj)
    {
        int first=0;
        int second=0;
        for(int child : adj[node])
        {
            int len=solve(child,ans,s,adj);
            if(s[child]==s[node]) continue;
            if(len>first)
            {
                second=first;
                first=len;
            }
            else if(len>second) second=len;
        }
        //sort(v.begin(),v.end(),greater<int>());
        ans=max(ans,1+first+second);
        
        return 1+first;
        
        
    }
    int longestPath(vector<int>& par, string s) 
    {
        int n=par.size();
        vector<vector<int>> adj(n);
        for(int i=1;i<n;i++)
        {
            adj[par[i]].push_back(i);
        }
        int ans=0;
        solve(0,ans,s,adj);
        return ans;
    }
};