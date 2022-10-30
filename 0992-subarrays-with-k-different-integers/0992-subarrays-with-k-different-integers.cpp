class Solution {
public:
    int solve(vector<int> nums,int k)
    {
        unordered_map<int,int> mp;
        int left=0;
        int right=0;
        int count=0;
        while(right<nums.size())
        {
            mp[nums[right]]++;
            
            while(mp.size()>k)
            {
                mp[nums[left]]--;
                if(mp[nums[left]]==0)
                {
                    mp.erase(nums[left]);
                }
                left++;
            }
            
            count+=(right-left+1);
            right++;
        }
        
        return count;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) 
    {
        return solve(nums,k)-solve(nums,k-1);    
    }
};