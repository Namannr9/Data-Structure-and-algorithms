class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
        int fre=1;
        int i=1;
        int n=nums.size();
        int k=1;
        while(i<n)
        {
            if(nums[i]==nums[i-1]) fre++;
            else fre=1;
            if(fre<=2) nums[k++]=nums[i];
            
            i++;
            
        }
        return k++;
    }
};