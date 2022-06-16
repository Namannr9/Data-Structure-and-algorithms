class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) 
    {
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            int first=nums[i];
            int target=-first;
            int l=i+1;
            int r=n-1;
            while(l<r)
            {
                if(nums[l]+nums[r]==target)
                {
                    ans.push_back({first,nums[l],nums[r]});
                    while(l<r && nums[l]==nums[l+1]) l++;
                    while(l<r && nums[r]==nums[r-1]) r--;
                }
                
                if(nums[l]+nums[r] < target) l++;
                else r--;
            }
            while(i+1 < n && nums[i]==nums[i+1]) i++;
        }
        return ans;
    }
};