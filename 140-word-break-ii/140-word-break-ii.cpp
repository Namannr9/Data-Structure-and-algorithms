class Solution {
public:
    void solve(string tmp,string s,vector<string> &ans,unordered_set<string> dict)
    {
        if(s.size()==0)
        {
            tmp=tmp.substr(0,tmp.size()-1);
            ans.push_back(tmp);
            return;
        }
        
        for(int i=1;i<=s.size();i++)
        {
            string left=s.substr(0,i);
            if(dict.find(left)!=dict.end())
            {
                string right=s.substr(i);
                solve(tmp+left+" ",right,ans,dict);
            }
        }
    }
    vector<string> wordBreak(string s, vector<string>& wordDict) 
    {
        unordered_set<string> dict(wordDict.begin(),wordDict.end());
        vector<string> ans;
        string tmp="";
        solve(tmp,s,ans,dict);
        return ans;
        
    }
};