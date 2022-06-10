class Solution {
public:
    int lengthOfLongestSubstring(string s) 
    {
        set<char> st;
        int l=0;
        int r=0;
        int n=s.size();
        int maxLen=0;
        while(r<n)
        {
            if(st.find(s[r])!=st.end())
            {
               st.erase(s[l]);
               l++;
            }
            else
            {
                st.insert(s[r]);
                maxLen=max(maxLen,r-l+1);
                r++;
            }
        }
        return maxLen;
    }
};