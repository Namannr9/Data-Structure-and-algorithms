class Solution {
public:
    
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) 
    {
        vector<int> ans;
        vector<int> count(101,0);
        for(int i=0;i<nums.size();i++)
        {
            count[nums[i]]++;
        }
        for(int i=1;i<101;i++)
        {
            count[i]+=count[i-1];
        }
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0) ans.push_back(0);
            else ans.push_back(count[nums[i]-1]);
        }
        return ans;
    }
    /*
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
    */
};