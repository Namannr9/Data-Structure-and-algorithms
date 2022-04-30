class Solution {
public:
   void dfs(int node,int parent,vector<int> &vis,vector<int> &tim,vector<int> &low,int &timer,vector<int> adj[], vector<vector<int>> &ans) {
        vis[node] = 1;
        tim[node] = low[node] = timer++;
        
        for(auto adjNode : adj[node]) {
            if(adjNode == parent) continue;
            if(!vis[adjNode]) {
                dfs(adjNode,node,vis,tim,low,timer,adj,ans);
                low[node] = min(low[node],low[adjNode]);
                if(low[adjNode] > tim[node]) {
                  ans.push_back({adjNode,node});
                }
            }
            else {
                low[node] = min(low[node],low[adjNode]);
            }
        }
    }
    vector<vector<int>> criticalConnections(int n, vector<vector<int>>& connections) {
        vector<int> adj[n];
        for(auto it : connections) {
            adj[it[0]].push_back(it[1]);
            adj[it[1]].push_back(it[0]);
        }
        
        vector<int> vis(n,0);
        vector<int> tim(n,-1);
        vector<int> low(n,-1);
        vector<vector<int>> ans;
        int timer = 0;
        for(int i=0; i<n; i++) {
            if(!vis[i]) {
                dfs(i,-1,vis,tim,low,timer,adj,ans);
            }
        }
        return ans;
    }
};