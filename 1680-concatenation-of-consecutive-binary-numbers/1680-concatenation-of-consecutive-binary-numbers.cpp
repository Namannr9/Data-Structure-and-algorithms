class Solution {
public:
    int leftMostBit(int n)
    {
        int len=0;
        while(n!=0)
        {
            len++;
            n=n>>1;
        }
        return len;
    }
    int concatenatedBinary(int n) 
    {
        long ans=0;
        int mod=1e9+7;
        for(int i=1;i<=n;i++)
        {
            int len=leftMostBit(i);
            
            ans=((ans<<len)%mod+i)%mod;
        }
        return ans;
    }
};