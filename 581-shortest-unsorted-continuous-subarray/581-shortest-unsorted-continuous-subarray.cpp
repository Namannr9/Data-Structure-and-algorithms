class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) 
    {
        int n=nums.size();
        int left=0;
        int right=-1;
        int lmin=INT_MAX;
        int lmax=INT_MIN;
        for(int i=0;i<n;i++)
        {
            if(nums[i]<lmax) right=i;
            lmax=max(nums[i],lmax);
        }
        for(int i=n-1;i>=0;i--)
        {
            if(nums[i]>lmin) left=i;
            lmin=min(nums[i],lmin);
        }
        //cout<<left<<endl;
        //cout<<right<<endl;
        return right-left+1;
    }
};