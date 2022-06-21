class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) 
    {
        map<string,vector<string>> mp;
        string tmp;
        for(string s:strs)
        {
            tmp=s;
            sort(tmp.begin(),tmp.end());
            mp[tmp].push_back(s);
        }
        
        vector<vector<string>> ans;
        for(auto ele:mp)
        {
            ans.push_back(ele.second);
        }
        return ans;
    }
};