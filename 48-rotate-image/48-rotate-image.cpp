class Solution {
public:
    
    /*
    if want to roated matrix anti clockwise just reverse column 
    */
    void rotate(vector<vector<int>>& matrix) 
    {
        int n=matrix.size();
        for(int i=0;i<n;i++)   // find the transponse
        {
            for(int j=0;j<i;j++)
            {
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        
        for(int i=0;i<n;i++)  // reverse each row
        {
            reverse(matrix[i].begin(),matrix[i].end());
        }
    }
    
    /*
    
    We create new matrix and copy in that manner that it looks like that we roated it
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
    */
};