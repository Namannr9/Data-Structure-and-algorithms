class Solution {
public:
    
    /*
    After row is reversed [1,0,1,1] -> [1,1,0,1]
    After inversion [1,1,0,1]->[0,0,1,0]
    
    if nums are same then just flip them
    */
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& mat) 
    {
        int n=mat.size();
        for(int row=0;row<n;row++)
        {
            int l=0;
            int r=n-1;
            while(l<r)
            {
                if(mat[row][l]==mat[row][r])
                {
                    mat[row][l]^=1;
                    mat[row][r]^=1;
                }
                l++;
                r--;
            }
            if(l==r) mat[row][l]^=1;
        }
        return mat;
    }
    /*
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) 
    {
        int n=image.size();
        for(int i=0;i<n;i++)
        {
            reverse(image[i].begin(),image[i].end());
            for(auto & num : image[i]) num=num^1;
        }
        return image;
    }
    
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) 
    {
        int n=image.size();
        for(int i=0;i<n;i++)
        {
            reverse(image[i].begin(),image[i].end());
            for(int j=0;j<n;j++)
            {
                image[i][j]=(image[i][j]==0) ? 1 : 0;
            }
        }
        return image;
    }
    */
};