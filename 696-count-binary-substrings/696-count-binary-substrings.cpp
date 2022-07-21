class Solution {
public:
    int countBinarySubstrings(string s) 
    {
        int cur=1;
        int pre=0;
        int ans=0;
        for(int i=1;i<s.size();i++)
        {
            if(s[i]==s[i-1]) cur++;
            else
            {
                ans+=min(cur,pre);
                pre=cur;
                cur=1;
            }
        }
        ans+=min(cur,pre);
        return ans;
    }
};