class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) 
    {
        priority_queue<pair<int,int>> pq;
        unordered_map<int,int> freq;
        for(int num:nums) freq[num]++;
        for(auto ele:freq)
        {
            pq.push({ele.second,ele.first});
        }
        
        vector<int> ans;
        for(int i=0;i<k;i++)
        {
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
    
    
    
    
    
    
    
    
    
    
    
    /*
    unordered_map<int,int> mp;
        priority_queue<pair<int,int>> pq;
        for(auto i:nums) mp[i]++;
        for(auto ele:mp) pq.push({ele.second,ele.first});
        vector<int> ans;
        for(int i=0;i<k;i++)
        {
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    */
};