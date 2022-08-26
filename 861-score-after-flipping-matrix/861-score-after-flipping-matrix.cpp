class Solution {
public:
    void flip(string s,vector<vector<int>> &grid,int index)
    {
        if(s=="Row")
        {
            for(int i=0;i<grid[0].size();i++)
            {
                grid[index][i]=!grid[index][i];
            }
        }
        else
        {
            for(int i=0;i<grid.size();i++)
            {
                grid[i][index]=!grid[i][index];
            }
        }
    }
    int matrixScore(vector<vector<int>>& grid) 
    {
        for(int i=0;i<grid.size();i++)
        {
            if(grid[i][0]==0) flip("Row",grid,i);
        }
        
        for(int i=1;i<grid[0].size();i++)
        {
            int count=0;
            for(int j=0;j<grid.size();j++)
            {
                if(grid[j][i]) count++;
            }
            
            if(count<=grid.size()/2) flip("col",grid,i);
        }
        
        int ans=0;
        for(int i=0;i<grid.size();i++)
        {
            string tmp="";
            for(int j=0;j<grid[0].size();j++)
            {
                cout<<grid[i][j]<<" ";
                tmp+=to_string(grid[i][j]);
            }
            cout<<endl;
            
            ans+=stoi(tmp,0,2);
        }
        return ans;
    }
};