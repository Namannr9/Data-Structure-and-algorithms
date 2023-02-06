class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) 
    {
        int sz=nums.size();
        vector<int> ans(sz);    
        int i=0;
        int j=n;
        int k=0;
        while(j<sz)
        {
            ans[k++]=nums[i++];
            ans[k++]=nums[j++];
        }
        return ans;
        
    }
};