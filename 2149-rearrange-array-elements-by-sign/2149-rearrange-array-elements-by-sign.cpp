class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) 
    {
        int size=nums.size();
        vector<int> ans(size,0);
        int p=0;
        int n=1;
        for(int a:nums)
        {
            if(a>=0)
            {
                ans[p]=a;
                p+=2;
            }
            else
            {
                ans[n]=a;
                n+=2;
            }
        }
        return ans;
    }
};