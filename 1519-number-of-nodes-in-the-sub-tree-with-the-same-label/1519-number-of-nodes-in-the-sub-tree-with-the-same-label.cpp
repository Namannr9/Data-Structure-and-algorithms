class Solution {
public:
    vector<int> dfs(int node,vector<vector<int>> &adj,string &labels,vector<int> &ans)
    {
        vector<int> fre(26,0);
        int ch=labels[node];
        ans[node]=1;
        for(int child : adj[node])
        {
            if(ans[child]) continue;
            vector<int> tmpFre=dfs(child,adj,labels,ans);
            for(int i=0;i<26;i++) fre[i]+=tmpFre[i];
        }
        fre[ch-'a']++;
        ans[node]=fre[ch-'a'];
        return fre;
    }
    vector<int> countSubTrees(int n, vector<vector<int>>& edges, string labels) 
    {
        vector<vector<int>> adj(n);
        vector<int> ans(n,0);
        for(auto e : edges)
        {
            adj[e[0]].push_back(e[1]);
            adj[e[1]].push_back(e[0]);
        }
        dfs(0,adj,labels,ans);
        return ans;    
    }
};