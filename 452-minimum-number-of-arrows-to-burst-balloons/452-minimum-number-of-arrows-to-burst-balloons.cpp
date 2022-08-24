class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& nums) 
    {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<int> pre=nums[0];
        int ans=n;
        for(int i=1;i<n;i++)
        {
            if(nums[i][0]<=pre[1])
            {
                pre[1]=min(pre[1],nums[i][1]);
                ans--;
            }
            else
            {
                pre=nums[i];
            }
        }
        return ans;
        
        
        
    }
};