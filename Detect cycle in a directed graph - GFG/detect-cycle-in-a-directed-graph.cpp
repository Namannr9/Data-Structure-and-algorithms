// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in a directed graph.
    int check(int node,vector<int> &vis,vector<int> &dfs,vector<int> adj[])
    {
        vis[node]=1;
        dfs[node]=1;
        for(auto nbr:adj[node])
        {
            if(!vis[nbr])
            {
                if(check(nbr,vis,dfs,adj)) return true;
            }
            else if(dfs[nbr]) return true;
        }
        dfs[node]=0;
        return false;
    }
    
    bool isCyclic(int V, vector<int> adj[]) 
    {
        vector<int> vis(V,0);
        vector<int> dfs(V,0);
        
        for(int i=0;i<V;i++)
        {
            if(!vis[i])
            {
                if(check(i,vis,dfs,adj)) return true;
            }
        }
        return false;
    }
};

// { Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}
  // } Driver Code Ends