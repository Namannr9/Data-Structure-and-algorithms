class Solution {
public:
    /*
    Instead increment all n-1 number by 1 we can decrement 1 number by 1;
    so we can find the smallest number and annwer would be the sum of diffrence of all number with min element from array.
    */
    int minMoves(vector<int>& nums) 
    {
        int mn=INT_MAX;
        
        for(int a:nums) mn=min(mn,a);
        
        int ans=0;
        
        for(int a:nums) ans+=a-mn;
        
        return ans;
    }
};