class Solution {
public:
    //Note if you want to make size of priority_queue not more then k element
    // then take min heap
    vector<int> topKFrequent(vector<int>& nums, int k) 
    {
   //     priority_queue<pair<int,int>> pq;  // max heap  
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;  // min heap
        unordered_map<int,int> freq;
        for(int num:nums) freq[num]++;
        for(auto ele:freq)
        {
            pq.push({ele.second,ele.first});
            if(pq.size()>k) pq.pop();
        }
        
        vector<int> ans;
        for(int i=0;i<k;i++)
        {
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
    
    // without using priority_queue
    /*
    static bool comp(pair<int,int> a,pair<int,int> b)
    {
        return a.second>b.second;
    }
    vector<int> topKFrequent(vector<int>& nums, int k) 
    {
        map<int,int> freq;
        for(int i=0;i<nums.size();i++) freq[nums[i]]++;
        
        vector<pair<int,int>> v;
        for(auto i:freq)
        {
            v.push_back({i.first,i.second});
        }
        sort(v.begin(),v.end(),comp);
        vector<int> ans;
        for(int i=0;i<k;i++)
        {
            ans.push_back(v[i].first);
        }
        return ans;
    */
};