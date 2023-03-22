class Solution {
public:
    
   int minScore(int n, vector<vector<int>>& roads) 
   {
    
        vector<vector<pair<int,int>>> adj(n+1);
        vector<int> vis(n+1,0);
        for(int i=0;i<roads.size();i++)
        {
            adj[roads[i][0]].push_back({roads[i][1],roads[i][2]});
            adj[roads[i][1]].push_back({roads[i][0],roads[i][2]});
        }
        queue<int> q;
        q.push(1);
        int res=INT_MAX;
        while(!q.empty())
        {
            int cur=q.front();
            q.pop();
            vis[cur]=1;
            for(auto x:adj[cur])
            {
                res=min(res,x.second);
                if(vis[x.first]!=1) q.push(x.first);
            }
        }
        return res;
   }
};