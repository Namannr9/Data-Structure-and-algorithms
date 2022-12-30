class Solution {
public:
    void dfs(int node,int dest,vector<int> tmp,vector<vector<int>> &ans,vector<vector<int>> graph)
    {
        if(node==dest)
        {
            ans.push_back(tmp);
            return;
        }
        
        for(int child : graph[node])
        {
            tmp.push_back(child);
            dfs(child,dest,tmp,ans,graph);
            tmp.pop_back();
        }
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) 
    {
        vector<vector<int>> ans;
        int n=graph.size();
        vector<int> tmp;
        tmp.push_back(0);
        dfs(0,n-1,tmp,ans,graph);
        return ans;
    }
};