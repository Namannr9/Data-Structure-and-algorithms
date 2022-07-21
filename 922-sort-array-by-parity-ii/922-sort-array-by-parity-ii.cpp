class Solution {
public:
    
    vector<int> sortArrayByParityII(vector<int>& nums) 
    {
        int i=0;
        int j=1;
        while(i<nums.size())
        {
            if(nums[i]%2==0) i=i+2;
            else if(nums[j]%2==1) j=j+2;
            else swap(nums[i],nums[j]);
        }
        return nums;
    }
    // at even index we have to put even number 
    // at odd index we have to put odd number
    /*
    vector<int> sortArrayByParityII(vector<int>& nums) 
    {
        int n=nums.size();
        vector<int> ans(n,0);    
        int odd=0;
        int even=0;
        for(int i=0;i<n;i++)
        {
            if(i%2==0) // even
            {
                while(nums[even]%2) even++;// skip all odd integer
                ans[i]=nums[even];
                even++;
            }
            else
            {
                while(nums[odd]%2==0) odd++;    // skip all even integer
                ans[i]=nums[odd];
                odd++;
            }
        }
        return ans;
    }
    */
};