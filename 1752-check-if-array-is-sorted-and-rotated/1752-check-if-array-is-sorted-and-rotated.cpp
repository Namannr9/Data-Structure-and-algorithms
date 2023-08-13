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
    /*
    how this logic works
    
    count variable maintain how many time array break the violation of ascending order if it is 0 that 
    means array is in sorted order or if it is 1 then it mean it is roated by some place 
    but if it is more than 1 than array is not present in sorted order.
    */
};