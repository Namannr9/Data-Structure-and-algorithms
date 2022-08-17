class Solution {
public:
    string findPalindrome(string s,int l,int r)
    {
        while(l>=0 && r<s.size() && s[l]==s[r])
        {
            l--;
            r++;
        }
        return s.substr(l+1,r-l-1);
    }
    string longestPalindrome(string s) 
    {
        int n=s.size();
        if(n<2) return s;
        string ans="";
        for(int i=0;i<n-1;i++)
        {
            string odd=findPalindrome(s,i,i);
            string even=findPalindrome(s,i,i+1);
            
            if(odd.size() > ans.size()) ans=odd;
            if(even.size() > ans.size()) ans=even;
        }
        return ans;
    }
};