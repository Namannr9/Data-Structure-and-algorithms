class Solution {
public:
    void rotate(vector<vector<int>>& matrix) 
    {
        int n=matrix.size();
        vector<vector<int>> tmp(n,vector<int>(n,0));
        int r=0;
        int c=0;
        for(int col=0;col<n;col++)
        {
            int c=0;
            for(int row=n-1;row>=0;row--,c++)
            {
                tmp[r][c]=matrix[row][col];
            }
            r++;
        }
        matrix=tmp;
        
    }
};