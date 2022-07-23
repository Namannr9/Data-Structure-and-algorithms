class Solution {
public:
    
    int findPeakElement(vector<int>& nums) 
    {
        int left=0;
        int right=nums.size()-1;
        while(left<right)
        {
            int mid=left+(right-left)/2;
            if(nums[mid]>nums[mid+1]) right=mid;
            else left=mid+1;
        }
        cout<<(left==right)<<endl;
        return left;
    }
    /*
    int findPeakElement(vector<int>& nums) 
    {
        int n=nums.size();
        if(n==1 || nums[0]>nums[1]) return 0;
        
        for(int i=1;i<n-1;i++)
        {
          if(nums[i]>nums[i-1] && nums[i]>nums[i+1]) return i;
        }
        if(nums[n-1]>nums[n-2]) return n-1;
        return -1;
            
    }
    */
};