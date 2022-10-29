class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) 
    {
        double ans=INT_MIN;
        double sum=0;
        for(int i=0;i<nums.size();i++)
        {
            if(i<k) sum+=nums[i];
            else
            {
                ans=max(sum,ans);
                sum-=nums[i-k];
                sum+=nums[i];
                
            }
        }
        ans=max(ans,sum);
        return ans/k;
    }
};