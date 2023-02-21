class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) 
    {
        unordered_map<int,int> mp;
        for(int a:nums) mp[a]++;
        for(auto ele : mp) if(ele.second==1) return ele.first;
        return -1;
    }
};