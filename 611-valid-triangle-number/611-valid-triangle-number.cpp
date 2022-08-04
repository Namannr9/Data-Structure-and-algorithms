class Solution {
public:
    int triangleNumber(vector<int>& nums) 
    {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        if(n<3) return 0;
        int ans=0;
        for(int i=1;i<n;i++)
        {
            int l=0;
            int r=i-1;
            while(l<r)
            {
                if(nums[l]+nums[r] > nums[i])
                {
                    ans+=(r-l);
                    r--;
                }
                else
                {
                    l++;
                }
            }
        }
        return ans;
    }
};