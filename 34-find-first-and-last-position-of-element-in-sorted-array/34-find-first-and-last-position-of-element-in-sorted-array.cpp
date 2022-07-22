class Solution {
public:
    int solve(vector<int> &nums,int target,string find)
    {
        int left=0;
        int right=nums.size()-1;
        int ans=-1;
        while(left<=right)
        {
            int mid=left+(right-left)/2;
            if(nums[mid]==target)
            {
                ans=mid;
                if(find=="first") right=mid-1;
                else left=mid+1;
            }
            else if(nums[mid]<target) left=mid+1;
            else right=mid-1;
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) 
    {
        int first=solve(nums,target,"first");
        int last=solve(nums,target,"last");
        return {first,last};
    }
    /*
    vector<int> searchRange(vector<int>& nums, int target) {
        int x=first(nums,target);
        int y=last(nums,target);
        return {x,y};
        
    }
    
    int first(vector<int> nums,int target)
    {
        int l=0;
        int h=nums.size()-1;
        int ans=-1;
        while(l<=h)
        {
            int mid=l+(h-l)/2;
            if(nums[mid]==target)
            {
                ans=mid;
                h=mid-1;
            }
            else if(target>nums[mid])
            {
                l=mid+1;
            }
            else
            {
                h=mid-1;
            }
        }
        return ans;
    }
    
    int last(vector<int> nums,int target)
    {
        int l=0;
        int h=nums.size()-1;
        int ans=-1;
        while(l<=h)
        {
            int mid=l+(h-l)/2;
            if(nums[mid]==target)
            {
                ans=mid;
                l=mid+1;
            }
            else if(target>nums[mid])
            {
                l=mid+1;
            }
            else
            {
                h=mid-1;
            }
          
        }
          return ans;
    }
    */
};