class Solution {
public:
    int minimumRounds(vector<int>& tasks) 
    {
        unordered_map<int,int> mp;
        int ans=0;
        for(int a:tasks) mp[a]++;
        
        for(auto ele:mp)
        {
            if(ele.second==1) return -1;
            ans+=ele.second/3;
            if(ele.second%3) ans+=1;
        }
        return ans;
        
    }
};