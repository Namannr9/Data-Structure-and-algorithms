class Solution {
public:
    int characterReplacement(string s, int k) 
    {
        unordered_map<char,int> mp;
        int window=0;
        int same=0;
        int l=0;
        int r=0;
        int ans=0;
        while(r<s.size())
        {
            mp[s[r]]++;
            window=r-l+1;
            same=max(same,mp[s[r]]);
            if(window-same > k)
            {
                mp[s[l]]--;
                l++;
            }
            ans=max(ans,r-l+1);
            
            r++;
        }
        return ans;
        
    }
};