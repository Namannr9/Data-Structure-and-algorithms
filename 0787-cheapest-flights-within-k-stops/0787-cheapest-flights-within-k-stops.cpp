class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int target, int k) 
    {
        vector<vector<pair<int,int>>> graph(n);
        
        for(auto v:flights)
        {
            graph[v[0]].push_back({v[1],v[2]});
        }
        
        int ans=INT_MAX;
        
        queue<pair<int,int>> q;
        vector<int> distance(n,INT_MAX);
        q.push({src,0});
        int stops=0;
        while(stops<=k && q.size())
        {
            int sz=q.size();
            while(sz--)
            {
                int node=q.front().first;
                int dist=q.front().second;
                q.pop();
                
                if(dist>distance[node]) continue;
                distance[node]=dist;
                
                for(auto e:graph[node])
                {
                    if(e.second+dist > ans) continue;
                    if(e.first==target) ans=min(ans,e.second+dist);
                    q.push({e.first,e.second+dist});
                }
            }
            stops++;
        }
        
        return ans==INT_MAX ? -1 : ans;
    }
};