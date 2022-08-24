class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) 
    {
        int n=nums.size();
        int close;
        if(target < 0) close=INT_MIN;
        else close=INT_MAX;
        
        sort(nums.begin(),nums.end());
        
        for(int i=0;i<n-2;i++)
        {
            int l=i+1;
            int r=n-1;
            while(l<r)
            {
                int sum=nums[i]+nums[l]+nums[r];
                if(abs(target - sum) < abs(target - close))
                {
                    close=sum;
                }
                if(target==sum) return target;
                else if(sum < target) l++;
                else r--;
            }
        }
        return close;
    }
};