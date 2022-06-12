class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) 
    {
        int sum=0;
        int l=0;
        int r=0;
        unordered_set<int> set;
        int ans=INT_MIN;
        for(;r<nums.size();r++)
        {
            while(set.find(nums[r])!=set.end())
            {
                set.erase(nums[l]);
                sum-=nums[l];
                l++;
            }
            set.insert(nums[r]);
            sum+=nums[r];
            ans=max(ans,sum);
        }
        return ans;
    }
};