class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int src) 
    {
        
        
        vector<vector<int>> adj[n+1];
        
        for(auto k:times)
        {
            adj[k[0]].push_back({k[1],k[2]});
        }
        
        vector<int> dist(n+1,1e9);
        
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        
        dist[src]=0;
        pq.push({0,src});
        
        while(!pq.empty())
        {
            int curNode=pq.top().second;
            int curDist=pq.top().first;
            pq.pop();
           // cout<<"curNode"<<curNode<<"->"<<"nbr"<<" ";
            for(vector<int> nbr:adj[curNode])
            {
                
                int next=nbr[0];
                int nextDist=nbr[1];
               // cout<<next<<" "<<nextDist<<endl;
                if(nextDist+curDist<dist[next])
                {
                    dist[next]=nextDist+curDist;
                    pq.push({dist[next],next});
                }
            }
            //cout<<endl;
        }
        
        int ans=-1;
        
        
        
        for(int i=1;i<n+1;i++)
        {
            
            if(dist[i]==1e9) return -1;
            if(ans<dist[i]) ans=dist[i];
           //cout<<dist[i]<<endl;
        }
        return ans;
        
    }
};