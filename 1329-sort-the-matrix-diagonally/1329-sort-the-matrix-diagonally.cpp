class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) 
    {
        int n=mat.size();
        int m=mat[0].size();
        
        vector<int> tmp;
        // the below for loop store each diagonal and sort it and again store in respective diagonal
        /*
        *
        * *
        * * *
        * * * *
        */
        for(int r=0;r<n;r++)
        {
            tmp.clear();
            for(int i=r,j=0;i<n && j<m ; i++,j++) tmp.push_back(mat[i][j]);
            
            sort(tmp.begin(),tmp.end());
            
            for(int i=r,j=0;i<n && j<m ; i++,j++) mat[i][j]=tmp[j];
        }
        
        
        for(int c=1;c<m;c++)
        {
            tmp.clear();
            for(int i=0,j=c;i<n && j<m; i++,j++) tmp.push_back(mat[i][j]);
            
            sort(tmp.begin(),tmp.end());
            
            for(int i=0,j=c;i<n && j<m; i++,j++) mat[i][j]=tmp[i];
        }
        
        return mat;
        
        
    }
};