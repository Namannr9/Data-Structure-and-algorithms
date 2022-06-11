class Solution {
public:
    int minOperations(vector<int>& nums, int x) 
    {
        int target=0;
        for(int num : nums)
        {
            target+=num;
        }
        target=target-x;
        if(target<0) return -1;
        int sum=0;
        int j=0;
        int i=0;
        int ans=INT_MIN;
        int n=nums.size();
        for(i=0;i<n;i++)
        {
            sum+=nums[i];
            while(sum>target)
            {
                sum=sum-nums[j];
                j++;
            }
            if(sum==target)
            {
                ans=max(ans,i-j+1);
            }
        }
        return ans==INT_MIN ? -1 : n-ans;
    }
};