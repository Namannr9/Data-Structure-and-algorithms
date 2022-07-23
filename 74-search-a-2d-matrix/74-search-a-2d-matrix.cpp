class Solution {
public:
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
};