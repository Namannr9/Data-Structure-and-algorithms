class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) 
    {
        int count=0;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j]<0) count++;
               // cout<<grid[i][j]<<endl;
            }
        }
        return count;
    }
//     int solve(vector<int> &nums)
//     {
//         int n=nums.size();
//         int left=0;
//         int right=n-1;
        
//         while(left<=right)      // think   4 3 2 1 -1 -2 -3
//         {
//             int mid=(left+right)/2;
//             if(nums[mid]>=0) left=mid+1;
//             else right=mid-1;
//         }
//         return n-right-1;
//     }
//     int countNegatives(vector<vector<int>>& grid) 
//     {
//         int ans=0;
//         for(int i=0;i<grid.size();i++)
//         {
//             ans+=solve(grid[i]);
//         }
//         return ans;
//     }
};