class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) 
    {
        vector<int> tmp(nums.begin(),nums.end());
        sort(nums.begin(),nums.end());
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++) if(mp.find(nums[i])==mp.end()) mp[nums[i]]=i;
        for(int i=0;i<nums.size();i++)
        {
            tmp[i]=mp[tmp[i]];
        }
        return tmp;
    }
};