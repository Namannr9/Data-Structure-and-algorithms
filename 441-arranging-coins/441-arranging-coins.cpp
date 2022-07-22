class Solution {
public:
    int arrangeCoins(int n) 
    {
        int i=1;
        n=n-i;
        while(n>=0)
        {
            i++;
            n=n-i;
        }
        return i-1;
    }
};