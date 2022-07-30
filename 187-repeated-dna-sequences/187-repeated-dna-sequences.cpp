class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) 
    {
        unordered_map<string,int> mp;
        if(s.size()<=10) return {};
        for(int i=0;i<s.size()-9;i++)
        {
            string tmp=s.substr(i,10);
            mp[tmp]++;
        }
        vector<string> ans;
        for(auto ele : mp)
        {
            if(ele.second>1) ans.push_back(ele.first);
        }
        return ans;
            
    }
};