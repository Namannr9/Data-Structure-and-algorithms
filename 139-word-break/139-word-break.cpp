class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) 
    {
        unordered_set<int> dp;
        unordered_set<string> dict;
        for(string str:wordDict) dict.insert(str);
        int n=s.size();
        dp.insert(0);
        for(int i=1;i<=n;i++)
        {
            for(int j:dp)
            {
                string tmp=s.substr(j,i-j);
                if(dict.find(tmp)!=dict.end())
                {
                    dp.insert(i);   // we can successfully form string up to i index.
                    break;
                }
            }
        }
        // return true we we form full string of length n
        return dp.find(n)!=dp.end(); 
        
    }
    /*
    Time limit exceed
    bool solve(string s,unordered_set<string> st)
    {
        if(s.size()==0) return true;
        
        for(int i=1;i<=s.size();i++)
        {
            string left=s.substr(0,i);
            string right=s.substr(i);
            if(st.find(left)!=st.end())
            {
                if(solve(right,st)) return true;
            }
        }
        return false;
    }
    bool wordBreak(string s, vector<string>& wordDict) 
    {
        unordered_set<string> st;
        for(string str:wordDict) st.insert(str);
        return solve(s,st);
    }
    */
};