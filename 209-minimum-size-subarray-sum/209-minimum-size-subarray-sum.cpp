class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) 
    {
        int l=0;
        int r=0;
        int ans=INT_MAX;
        int n=nums.size();
        int sum=0;
        while(r<n)
        {
            sum+=nums[r++];
            
            while(sum>=target)
            {
                ans=min(ans,r-l);
                sum-=nums[l++];
            }
        }
        return ans==INT_MAX ? 0 : ans;
        
    }
    /*
    // brute force approach
    create all substring and check for sum>=target and having minimum length
    int minSubArrayLen(int target, vector<int>& nums) 
    {
        int n=nums.size();
        vector<int> sum(n);
        sum[0]=nums[0];
        for(int i=1;i<n;i++) sum[i]=sum[i-1]+nums[i];
        
        int ans=INT_MAX;
        for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j++)
            {
                int s=sum[j]-sum[i]+nums[i];
                if(s>=target)
                {
                    ans=min(ans,j-i+1);  
                }
            }
        }
        return ans==INT_MAX ? 0 : ans;
    }
    */
};