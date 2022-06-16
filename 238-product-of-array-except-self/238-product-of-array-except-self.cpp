class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) 
    {
        int n=nums.size();
        vector<int> ans(n,0);
        ans[0]=1;
        int prefix=nums[0];
        for(int i=1;i<n;i++)
        {
            ans[i]=prefix;
            prefix=prefix*nums[i];
        }
        int sufix=nums[n-1];
        for(int i=n-2;i>=0;i--)
        {
            ans[i]=ans[i]*sufix;
            sufix=sufix*nums[i];
        }
        return ans;
    }
};