class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) 
    {
        unordered_map<int,int> mp;
        
        for(int a:nums) mp[a]++;
        vector<int> ans;
        for(auto ele : mp)
        {
            if(ele.second==2) ans.push_back(ele.first);
        }
        
        for(int i=1;i<=nums.size();i++)
        {
            if(mp[i]==0) ans.push_back(i);
        }
        
        return ans;
    }
};