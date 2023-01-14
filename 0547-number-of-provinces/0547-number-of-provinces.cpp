class Solution {
public:
    int find(int node ,vector<int> &par)   // find the parent of node
    {
        if(node==par[node]) return node;
        return par[node]=find(par[node],par);
    }
    
    
    int findCircleNum(vector<vector<int>>& isConnected) 
    {
        int n=isConnected.size();
        
        int group=n;   // assuming there are total n groups ans no cities are connected
        
        vector<int> par(n);
        
        for(int i=0;i<n;i++) par[i]=i;
        
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(isConnected[i][j])           // if cities are connected 
                {
                    int x=find(i,par);
                    int y=find(j,par);
                    
                    if(x!=y)        // if there parent are not same they are not belong to same group 
                    {
                        par[x]=y;         // make there group same 
                        group--;          // merging group will decrement our count
                    }
                }
            }
        }
        return group;
    }
};