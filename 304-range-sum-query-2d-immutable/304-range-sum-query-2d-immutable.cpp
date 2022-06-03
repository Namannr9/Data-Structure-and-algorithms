class NumMatrix {
public:
    vector<vector<int>> mat;
    NumMatrix(vector<vector<int>>& matrix) 
    {
        int r=matrix.size();
        int c=matrix[0].size();
        mat=vector<vector<int>>(r+1,vector<int>(c+1));
        for(int i=1;i<=r;i++)
        {
            for(int j=1;j<=c;j++)
            {
                mat[i][j]=mat[i-1][j]+mat[i][j-1]-mat[i-1][j-1]+matrix[i-1][j-1];
            }
        }
    }
    
    int sumRegion(int r1, int c1, int r2, int c2) 
    {
        r1++;
        c1++;
        r2++;
        c2++;
        return mat[r2][c2]-mat[r2][c1-1]-mat[r1-1][c2]+mat[r1-1][c1-1];
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */