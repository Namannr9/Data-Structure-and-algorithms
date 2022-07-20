class Solution {
public:
    void reverse(string &s,int l,int r)
    {
        while(l<r) swap(s[l++],s[r--]);
    }
    string reverseStr(string s, int k) 
    {
        int l=0;
        int n=s.size();
        int r=min(l+k-1,n-1);
        while(l<n)
        {
            reverse(s,l,r);
            l+=2*k;
            r=min(l+k-1,n-1);
          
        }
        return s;
    }
};