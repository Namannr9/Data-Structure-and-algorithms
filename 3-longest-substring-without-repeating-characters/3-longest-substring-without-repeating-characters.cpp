class Solution {
public:
    int lengthOfLongestSubstring(string s) 
    {
        unordered_map<char,int> mp;
        int l=0;
        int r=0;
        int len=0;
        for(;r<s.size();r++)
        {
            if(mp.find(s[r])!=mp.end())
            {
                l=max(l,mp[s[r]]+1);
            }
            
            len=max(len,r-l+1);
            mp[s[r]]=r;
        }
        return len;
            
        
    }
};