class Solution {
public:
    bool canFinish(int n, vector<vector<int>>& pre) 
    {
        vector<int> indegree(n,0);
        vector<vector<int>> adj(n);
        for(auto edge : pre)
        {
            adj[edge[0]].push_back(edge[1]);
        }
        
        for(int i=0;i<n;i++)
        {
            for(int node : adj[i]) indegree[node]++;
        }
        
        queue<int> q;
        for(int i=0;i<n;i++) if(indegree[i]==0) q.push(i);
        
        int count=0;
        while(q.size())
        {
            int node=q.front();
            q.pop();
            count++;
            for(int child : adj[node])
            {
                indegree[child]--;
                if(indegree[child]==0) q.push(child);
            }
        }
        
        if(count==n) return true;
        return false;
    }
    /*
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
    */
};