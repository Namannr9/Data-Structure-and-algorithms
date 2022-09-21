class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries)
    {
        int preSum=0;
        
        for(int i=0;i<nums.size();i++) if(nums[i]%2==0) preSum+=nums[i];
        
        vector<int> ans;
        
        for(auto v:queries)
        {
            int value=v[0];
            int idx=v[1];
            int tmp=nums[idx];
            nums[idx]+=value;
            if(nums[idx]%2==0)
            {
                if(tmp%2==0) // even
                {
                    preSum+=value;
                }
                else preSum+=nums[idx];
                
            }
            else if(tmp%2==0) preSum-=tmp;
            ans.push_back(preSum);
        }
        return ans;
    }
};