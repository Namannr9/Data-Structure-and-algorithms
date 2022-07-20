class Solution {
public:
    bool isHappy(int n) 
    {
        unordered_map<int,int> mp;
        int r=0;
        int sum=0;
        while(n!=1)
        {
            while(n!=0)
            {
                r=n%10;
                sum=sum+r*r;
                n=n/10;
            }
            if(sum==1) return true;
            if(mp[sum]) return false;
            mp[sum]=1;
            n=sum;
            sum=0;
        }
        return true;
    }
};