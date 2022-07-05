class Solution {
public:
    string findPalindrome(string s,int left,int right)
    {
        int n=s.size();
        while(left>=0 && right<n && s[left]==s[right])
        {
            left--;
            right++;
        }
        return s.substr(left+1,right-left-1);
    }
    string longestPalindrome(string s) 
    {
        int n=s.size();
        if(n<2) return s;
        string ans="";
        ans+=s[0];
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