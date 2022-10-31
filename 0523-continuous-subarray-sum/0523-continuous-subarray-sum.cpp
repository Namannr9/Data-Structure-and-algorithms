class Solution {
public:
    /*
    We need a subarray say from i to j such that sum of all elements is divisible by k.

    sum_j means prefix sum from 0 to j

    sum_i means prefix sum from 0 to i

    (sum_j - sum_i) % k = 0
    sum_j % k - sum % k = 0
    sum_j % k = sum_i % k    <Relation derived !!!>
    */
    bool checkSubarraySum(vector<int>& nums, int k) 
    {
        int sum=0;
        unordered_map<int,int> mp;
        
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            sum=sum%k;
            
            if(sum==0 && i>0) return true;
                
            if(mp.find(sum)!=mp.end())
            {
                if(i-mp[sum]>1) return true; // i-mp[sum] > 1 indicate more then one element
            }
            else
            {
                mp[sum]=i;
            }
        }
        
        return false;
    }
};