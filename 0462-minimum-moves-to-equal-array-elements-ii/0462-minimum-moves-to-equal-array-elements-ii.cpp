class Solution {
public:
    int minMoves2(vector<int>& nums) 
    {
        sort(nums.begin(),nums.end());
        int ans=0;
        int n=nums.size();
        for(int i=0;i<n/2;i++)
        {
            ans+=nums[n-i-1]-nums[i];      // add diffrence
        }
        return ans;
    }
};