class Solution {
public:
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
    /*
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