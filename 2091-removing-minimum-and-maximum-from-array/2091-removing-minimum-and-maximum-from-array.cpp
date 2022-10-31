class Solution {
public:
    int minimumDeletions(vector<int>& nums) 
    {
        int i=0;
        int j=0;
        int n=nums.size();
        for(int a=0;a<n;a++)
        {
            if(nums[a]<nums[i]) i=a;    // i-> min index
            if(nums[a]>nums[j]) j=a;    // j->max index;
        }
        
        return min({max(i+1,j+1) , max(n-i,n-j) , i+1+n-j , j+1+n-i});
    }
};