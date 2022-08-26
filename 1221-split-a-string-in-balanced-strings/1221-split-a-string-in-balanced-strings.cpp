class Solution {
public:
    int balancedStringSplit(string s) 
    {
        int n=s.size();
        int sum=0;
        int ans=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='R') sum++;
            else sum--;
            if(sum==0) ans++;
        }
        return ans;
    }
};