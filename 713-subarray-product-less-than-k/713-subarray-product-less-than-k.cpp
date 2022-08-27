class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) 
    {
        int l=0;
        int r=0;
        long pro=1;
        int ans=0;
        int n=nums.size();
        for(;r<n;r++)
        {
            pro*=nums[r];
            while(pro>=k && l<n)
            {
                pro/=nums[l++];
            }
            if(pro<k) ans+=(r-l)+1;
        }
        return ans;
    }
};