class Solution {
public:
    vector<int> findOrder(int n, vector<vector<int>>& pre) 
    {
        vector<int> indegree(n,0);
        vector<vector<int>> adj(n);
        
        for(auto edge : pre)
        {
            adj[edge[1]].push_back(edge[0]);
            indegree[edge[0]]++;
        }
        
        queue<int> q;
        for(int i=0;i<n;i++) if(indegree[i]==0) q.push(i);
        
        vector<int> topo;
        
        while(q.size())
        {
            int node=q.front();
            q.pop();
            topo.push_back(node);
            
            for(int child : adj[node])
            {
                indegree[child]--;
                if(indegree[child]==0) q.push(child);
            }
        }
        
        if(topo.size()==n) return topo;
        return {};
        
        
    }
};