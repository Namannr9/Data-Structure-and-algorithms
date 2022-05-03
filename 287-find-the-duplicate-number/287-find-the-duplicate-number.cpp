// brute force sort the array and find duplicate o(n log n);
// extra space using set (if already exsits then return value)
// modify array mark -negative
class Solution {
public:
    int findDuplicate(vector<int>& nums) 
    {
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            int cur=abs(nums[i]);
            if(nums[cur]<0) return cur;
            nums[cur]*=-1;
        }
        return -1;
    }
    
    /*
    int slow=nums[0];
        int fast=nums[0];
        slow=nums[slow];
        fast=nums[nums[fast]];
        while(fast!=slow)
        {
            slow=nums[slow];
            fast=nums[nums[fast]];
        }
        slow=nums[0];
        while(fast!=slow)
        {
            slow=nums[slow];
            fast=nums[fast];
        }
        return slow;
    */
        
    
};