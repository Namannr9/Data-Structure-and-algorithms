class Solution {
public:
    
    // brute force
    /*
    In row(set) set the index of row which having zero so in further traversal we set them zero
    ans same thing is done in column also
    */
    void setZeroes(vector<vector<int>>& matrix) 
    {
        set<int> row;
        set<int> col;
        
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
                if(matrix[i][j]==0)
                {
                    row.insert(i);
                    col.insert(j);
                }
            }
        }
        
        for(int i : row) for(int j=0;j<matrix[0].size();j++) matrix[i][j]=0;
        
        for(int j:col) for(int i=0;i<matrix.size();i++) matrix[i][j]=0;
                
    }
};