class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
        int i=1;
        int k=1;
        int fre=1;
        int n=nums.size();
        while(i<n)
        {
            if(nums[i]==nums[i-1]) fre++;
            else fre=1;
            if(fre<=2) nums[k++]=nums[i];
            i++;
        }
        return k;
            
    }
};