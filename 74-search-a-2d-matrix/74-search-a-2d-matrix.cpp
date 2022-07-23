class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int target) 
    {
        int i=0;
        int j=mat[0].size()-1; // last col
        int n=mat.size();
        while(i<n && j>=0)
        {
            if(mat[i][j]==target) return true;
            
            if(mat[i][j]<target) i++;
            else j--;
        }
        return false;
        
    }
    
    /*
    bool searchMatrix(vector<vector<int>>& mat, int target) 
    {
        int left=0;
        int r=mat.size();
        int c=mat[0].size();
        int right=(r*c)-1;
        while(left<=right)
        {
            int mid=left+(right-left)/2;
            int num=mat[mid/c][mid%c];
            if(num==target) return true;
            else if(num<target) left=mid+1;
            else right=mid-1;
        }
        return false;
    }
    */
};