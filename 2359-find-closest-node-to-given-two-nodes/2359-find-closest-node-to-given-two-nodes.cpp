class Solution {
public:
    void dfs(int node ,int dist,vector<bool> &vis,vector<int> &edges,vector<int> &distance)
    {
        if(node==-1 || vis[node]) return;
        vis[node]=true;
        distance[node]=dist;
        dfs(edges[node],dist+1,vis,edges,distance);
        vis[node]=false;
    }
    int closestMeetingNode(vector<int>& edges, int a, int b) 
    {
        int n=edges.size();
        vector<bool> vis(n,false);
        vector<int> aDist(n,INT_MAX);
        vector<int> bDist(n,INT_MAX);
        
        dfs(a,0,vis,edges,aDist);
        dfs(b,0,vis,edges,bDist);
        
        int minDist=INT_MAX;
        int ans=-1;
        for(int i=0;i<n;i++)
        {
            if(aDist[i]==INT_MAX || bDist[i]==INT_MAX) continue;
            if(minDist > max(aDist[i],bDist[i]))
            {
                ans=i;
                minDist=max(aDist[i],bDist[i]);
            }
        }
        return ans;
    }
};