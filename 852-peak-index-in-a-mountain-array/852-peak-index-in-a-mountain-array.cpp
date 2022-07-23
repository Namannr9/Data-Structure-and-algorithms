class Solution {
public:
    int peakIndexInMountainArray(vector<int>& nums) 
    {
        int left=1;
        int right=nums.size()-1;
        while(left<=right)
        {
            int mid=left+(right-left)/2;
            if(nums[mid-1]<nums[mid] && nums[mid]>nums[mid+1]) return mid;
            else if(nums[mid-1]>nums[mid]) right=mid-1;
            else left=mid+1;
        }
        return -1;
    }
    
    /*
    int peakIndexInMountainArray(vector<int>& nums) 
    {
        int left=0;
        int right=nums.size()-1;
        while(left<right)
        {
            int mid=left+(right-left)/2;
            if(nums[mid]>nums[mid+1]) right=mid;
            else left=mid+1;
        }
        return left;
    }
    */
};