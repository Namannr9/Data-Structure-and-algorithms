class Solution {
public:
    int missingNumber(vector<int>& nums) 
    {
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]=1;
        }
        
        int ans=-1;
        for(int i=0;i<nums.size()+1;i++)
        {
            if(mp.find(i)==mp.end()) ans=i;
        }
        
        return ans;
    }
    
    
    /*
    bit manipulation
     int xr=0;
        int i=0;
        for(;i<nums.size();i++)
        {
            xr=xr^nums[i]^i;
        }
        return xr^i;
    */
    
    /*
    
    // using sum variable
    int len=nums.size();
        int sum=len*(len+1)/2;
        for(int i=0;i<len;i++)
        {
            sum-=nums[i];
        }
        return sum;
    
    
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