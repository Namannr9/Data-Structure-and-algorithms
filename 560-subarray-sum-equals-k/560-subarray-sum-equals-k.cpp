class Solution {
public:
    
    
    int subarraySum(vector<int>& nums, int k) 
    {
        unordered_map<int,int> mp;
        mp[0]++;
        int ans=0;
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            if(mp.find(sum-k)!=mp.end())
            {
                ans+=mp[sum-k];
            }
            mp[sum]++;
        }
        return ans;
    }
  
    
  /*
  int subarraySum(vector<int>& nums, int k) 
    {
        int count=0;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            int sum=0;
            for(int j=i;j<n;j++)
            {
                sum+=nums[j];
                if(sum==k) count++;
                
            }
        }
        return count;
    }
    */
};