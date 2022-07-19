class Solution {
public:
    int singleNumber(vector<int>& nums) 
    {
        unordered_map<int,int> mp;
        for(int a:nums) mp[a]++;
        for(auto ele :mp) if(mp[ele.first]==1) return ele.first;
        return -1;
    }
};