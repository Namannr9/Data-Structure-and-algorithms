class Solution {
public:
    int strStr(string s, string target) 
    {
        int m=s.size();
        int n=target.size();
        
        for(int i=0;i<=m-n;i++)
        {
            int j=0;
            for(;s[i+j]==target[j] && j<n;j++);
            if(j==n) return i;
        }
        return -1;
        
    }
};