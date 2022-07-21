class Solution {
public:
    int arrangeCoins(int n) 
    {
        int ans=0;
        int i=1;
        while(1)
        {
            n=n-i;
            if(n>=0) ans++;
            else break;
            i++;
        }
        return ans;
    }
};