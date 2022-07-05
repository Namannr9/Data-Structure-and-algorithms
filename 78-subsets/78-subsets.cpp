class Solution {
public:
    void solve(int index,vector<int> &ds,vector<vector<int>> &ans,vector<int> nums)
    {
        if(index>=nums.size())
        {
            ans.push_back(ds);
            return;
        }
        
        ds.push_back(nums[index]);  // pick the element
        
        solve(index+1,ds,ans,nums);
        
        ds.pop_back();  
        
        solve(index+1,ds,ans,nums);   // not pick the element
    }
    vector<vector<int>> subsets(vector<int>& nums) 
    {
        vector<vector<int>> ans;
        vector<int> ds;
        solve(0,ds,ans,nums);
        return ans;
    }
};