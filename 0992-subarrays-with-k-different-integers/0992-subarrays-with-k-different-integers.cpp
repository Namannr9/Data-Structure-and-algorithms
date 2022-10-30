class Solution {
public:
    /* this function will return number of subarray having atmost k diffrent interger 
    
    but we want to calculate the number of subarray which having exctally k diffrent integer 
    so what we are doing ..?
    
    we just calculate subarray having atmost k diffrent integer and substarct number of subarray 
    having at most k-1 diffrent integer 
    
    In this way we get the exact number of subarray having exactlly k diffrent integer
    
    */
    

    int solve(vector<int> nums,int k)
    {
        unordered_map<int,int> mp;
        int left=0;
        int right=0;
        int count=0;
        while(right<nums.size())
        {
            mp[nums[right]]++;
            
            while(mp.size()>k)
            {
                mp[nums[left]]--;
                if(mp[nums[left]]==0)
                {
                    mp.erase(nums[left]);
                }
                left++;
            }
            
            count+=(right-left+1);
            right++;
        }
        
        return count;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) 
    {
        return solve(nums,k)-solve(nums,k-1);    
    }
};