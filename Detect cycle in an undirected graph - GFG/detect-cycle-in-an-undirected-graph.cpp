// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in an undirected graph.
    bool dfs(int node,int parent ,vector<int> &vis,vector<int> adj[])
    {
        vis[node]=1;
        for(auto nbr:adj[node])
        {
            if(!vis[nbr])
            {
                
                if(dfs(nbr,node,vis,adj)) return true;
            }
            else if(parent!=nbr) return true;
        }
        return false;
    }
    bool isCycle(int V, vector<int> adj[]) 
    {
        vector<int> vis(V,0);
        for(int i=0;i<V;i++)
        {
            if(!vis[i])
            {
                if(dfs(i,-1,vis,adj)) return true;
            }
        }
        return false;
    }
    /*
    bool check(int src,vector<int> &vis,vector<int> adj[])
    {
        queue<pair<int,int>> q;
        q.push({src,-1});
        vis[src]=1;
        while(q.size())
        {
            int node=q.front().first;
            int parent=q.front().second;
            q.pop();
            for(int child:adj[node])
            {
                if(!vis[child])
                {
                    vis[child]=1;
                    q.push({child,node});
                }
                else
                {
                    if(parent!=child) return true;
                }
            }
        }
        return false;
    }
    bool isCycle(int V, vector<int> adj[]) 
    {
        vector<int> vis(V,0);
        for(int i=0;i<V;i++)
        {
            if(!vis[i])
            {
                if(check(i,vis,adj)) return true;
            }
        }
        return false;
    }
    */
};

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        bool ans = obj.isCycle(V, adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}  // } Driver Code Ends