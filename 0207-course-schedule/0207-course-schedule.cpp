class Solution {
public:
    bool isCycle(int node,vector<int> &vis,vector<vector<int>> &adj)
    {
        if(vis[node]==1) return true;
        
        
        if(vis[node]==0)
        {
            vis[node]=1;
            for(int child : adj[node])
            {
                if(isCycle(child,vis,adj)) return true;
            }    
        }
        vis[node]=2;
        return false;
    }
    bool canFinish(int n, vector<vector<int>>& pre) 
    {
        vector<vector<int>> adj(n);
        vector<int> vis(n,0);
        for(auto e : pre)
        {
            adj[e[1]].push_back(e[0]);
        }
        
        for(int i=0;i<n;i++)
        {
            if(isCycle(i,vis,adj)) return false;
        }
        return true;
    }
};