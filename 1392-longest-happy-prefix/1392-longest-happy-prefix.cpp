class Solution {
public:
    string longestPrefix(string s) 
    {
        int n=s.size();
        vector<int> pre(n,0);
        for(int i=1;i<n;i++)
        {
            int j=pre[i-1];
            while(j>0 && s[i]!=s[j]) j=pre[j-1];
            if(s[i]==s[j])
            {
                j++;
                pre[i]=j;
            }
        }
        int len=pre[n-1];
        return s.substr(0,len);
        
    }
};