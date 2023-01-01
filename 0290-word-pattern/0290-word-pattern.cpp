class Solution {
public:
    bool wordPattern(string pat, string s) 
    {
        vector<string> tmp;
        string str="";
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==' ')
            {
                tmp.push_back(str);
                str="";
            }
            else str+=s[i];
        }
        tmp.push_back(str);
        
        if(pat.size()!=tmp.size()) return false;    
    
        unordered_map<char,string> mp;
        unordered_set<string> st;
        
        
        for(int i=0;i<pat.size();i++)
        {
            if(mp.find(pat[i])!=mp.end())
            {
                if(mp[pat[i]]!=tmp[i]) return false;
            }
            else
            {
                if(st.count(tmp[i])) return false;
                mp[pat[i]]=tmp[i];
                st.insert(tmp[i]);
            }
        }
        
        return true;
    }
};