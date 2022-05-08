class Solution {
public:
    /*
    Brute force traverse the array using two nested loops
    In each iteration fix a number and found its counter part to 
    complete the target
    */
    
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        unordered_map<int,int> mp;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            int found=target-nums[i];
            if(mp.find(found)!=mp.end())
            {
                return {mp[found],i};
            }
            mp[nums[i]]=i;
        }
        return {-1,-1};
    }
};