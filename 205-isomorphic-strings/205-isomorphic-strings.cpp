class Solution {
public:
    string general(string s)
    {
        unordered_map<char,int> mp;
        int c=1;
        string ans;
        for(int i=0;i<s.size();i++)
        {
            if(mp.find(s[i])==mp.end())
            {
                mp[s[i]]=c++;
            }
            ans.append(to_string(mp[s[i]]));
        }
        return ans;
    }
    bool isIsomorphic(string s, string t) 
    {
        s=general(s);    
        t=general(t);
        return s==t;
    }
};