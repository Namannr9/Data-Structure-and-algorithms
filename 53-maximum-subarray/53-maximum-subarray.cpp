class Solution {
public:
    
    int maxSubArray(vector<int>& nums) 
    {
        int lmax=nums[0];
        int gmax=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            lmax=max(lmax+nums[i],nums[i]);
            gmax=max(lmax,gmax);
        }
        return gmax;
    }
    /*
    brute force
    int maxSubArray(vector<int>& nums) 
    {
        int sum=0;
        int ans=INT_MIN;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            sum=0;
            for(int j=i;j<n;j++)
            {
                sum+=nums[j];
                ans=max(sum,ans);
            }
        }
        return ans;
    }
    */
};