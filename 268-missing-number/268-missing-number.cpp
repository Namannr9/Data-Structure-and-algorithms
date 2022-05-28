class Solution {
public:
    int missingNumber(vector<int>& nums) 
    {
        int len=nums.size();
        int sum=len*(len+1)/2;
        for(int i=0;i<len;i++)
        {
            sum-=nums[i];
        }
        return sum;
    }
    
    /*
    // binary search
        sort(nums.begin(),nums.end());
        int i=0;
        int j=nums.size()-1;
        while(i<=j)
        {
            int mid=(i+j)/2;
            if(nums[mid]==mid)
            {
                i=mid+1;
            }
            else
            {
                j=mid-1;
            }
        }
        return i;
        */
};