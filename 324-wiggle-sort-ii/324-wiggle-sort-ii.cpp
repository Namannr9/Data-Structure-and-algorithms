class Solution {
public:
    void wiggleSort(vector<int>& nums) 
    {
        if(nums.size()==1) return;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        vector<int> ans(n);
        int i=1;
        for(int j=n-1;j>=0;j--)
        {
            ans[i]=nums[j];
            if(i>=n-2) i=0;
            else i+=2;
        }
        for(int i=0;i<n;i++)
        {
            nums[i]=ans[i];
        }
    }
};