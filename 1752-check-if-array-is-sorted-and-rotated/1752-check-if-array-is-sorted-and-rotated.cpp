class Solution {
public:
    bool check(vector<int>& nums) 
    {
        int sz=nums.size();
        int count=0;
        for(int i=0;i<sz;i++)
        {
            if(nums[i]>nums[(i+1)%sz]) count++;
        }
        return count<=1;
    }
};