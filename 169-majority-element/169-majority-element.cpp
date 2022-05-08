class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        int votes=0;
        int candidate=-1;
        for(int i=0;i<nums.size();i++)
        {
            if(votes==0)
            {
                candidate=nums[i];
            }
            if(candidate==nums[i]) votes++;
            else votes--;
        }
        return candidate;
    }
};