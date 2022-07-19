class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) 
    {
        long long xorr=0;
        for(int i:nums)
        {
            xorr=xorr^i;
        }
        
        long long lowestBit=xorr & (-xorr);   // right most set bit
        vector<int> ans(2,0);
        
        // using this right most set bit we divide then into two groups and performing xorr operation
        for(int num:nums)
        {
            if(lowestBit & num)
            {
                ans[0]=ans[0]^num;
            }
            else
            {
                ans[1]=ans[1]^num;
            }
        }
        return ans;
    }
};