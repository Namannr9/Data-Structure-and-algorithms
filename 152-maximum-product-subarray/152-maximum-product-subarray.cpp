class Solution {
public:
    int maxProduct(vector<int>& nums) 
    {
        int pos=nums[0];
        int neg=nums[0];
        int ans=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]<0) swap(pos,neg);
            
            pos=max(nums[i],pos*nums[i]);
            neg=min(nums[i],neg*nums[i]);
            ans=max(ans,pos);
        }
        return ans;
    }
};