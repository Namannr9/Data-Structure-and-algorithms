class Solution {
public:
    static bool cmp(pair<int,string> a,pair<int,string> b)
    {
        if(a.first==b.first) return a.second<b.second;
        return a.first>b.first;
    }
    vector<string> topKFrequent(vector<string>& words, int k) 
    {
        vector<pair<int,string>> tmp;
        
        unordered_map<string,int> mp;
        
        for(string s:words) mp[s]++;
        
        for(auto ele:mp) tmp.push_back({ele.second,ele.first});
        
        sort(tmp.begin(),tmp.end(),cmp);
        vector<string> ans;
        for(int i=0;i<k;i++)
        {
            ans.push_back(tmp[i].second);
        }
        return ans;
    }
};