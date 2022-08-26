class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) 
    {
        int sum=0;
        int ans=0;
        for(int a:nums)
        {
            if(a==0) sum=0;
            else sum+=1;
            ans=max(ans,sum);
        }
        return ans;
    }
};