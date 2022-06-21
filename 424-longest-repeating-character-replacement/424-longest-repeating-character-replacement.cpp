class Solution {
public:
    int characterReplacement(string s, int k) 
    {
        int l=0;
        int r=0;
        int n=s.size();
        int window=0;
        int ans=0;
        int same=0;
        unordered_map<char,int> mp;
        while(r<n)
        {
            mp[s[r]]++;
            same=max(same,mp[s[r]]);
            window=r-l+1;
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