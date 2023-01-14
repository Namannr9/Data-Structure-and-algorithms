class Solution {
public:
    int find(int node ,vector<int> &par)
    {
        if(node==par[node]) return node;
        return par[node]=find(par[node],par);
    }
    int findCircleNum(vector<vector<int>>& isConnected) 
    {
        int n=isConnected.size();
        
        int group=n;
        
        vector<int> par(n);
        
        for(int i=0;i<n;i++) par[i]=i;
        
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(isConnected[i][j])
                {
                    int x=find(i,par);
                    int y=find(j,par);
                    
                    if(x!=y)
                    {
                        par[x]=y;
                        group--;
                    }
                }
            }
        }
        return group;
    }
};