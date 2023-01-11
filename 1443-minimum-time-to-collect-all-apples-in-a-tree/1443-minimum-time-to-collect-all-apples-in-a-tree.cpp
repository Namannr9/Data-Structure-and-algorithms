class Solution {
public:
    int dfs(int node,vector<vector<int>> &adj,vector<bool> &hasApple,vector<bool> &vis)
    {
        vis[node]=true;
        int dis=0;
        for(int child : adj[node])
        {
            if(vis[child]) continue;
            int tmpDis=dfs(child,adj,hasApple,vis);
            if(tmpDis)
            {
                dis+=tmpDis;
            }
        }
        if(hasApple[node] || dis) dis+=2;
        cout<<node<<" "<<dis<<endl;
        return dis;
    }
    int minTime(int n, vector<vector<int>>& edges, vector<bool>& hasApple) 
    {
        vector<vector<int>> adj(n);
        vector<bool> vis(n,false);
        for(auto e : edges)
        {
            adj[e[0]].push_back(e[1]);
            adj[e[1]].push_back(e[0]);
        }
        int dis=dfs(0,adj,hasApple,vis);                       
        if(dis) dis-=2;
        return dis;
    }
};