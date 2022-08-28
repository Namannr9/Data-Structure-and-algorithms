class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& que) 
    {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        for(int i=1;i<n;i++)
        {
            nums[i]+=nums[i-1];  // calculate prefix sum;
        }
        
        vector<int> ans(que.size(),0);
        for(int i=0;i<que.size();i++)
        {
            for(int j=0;j<n;j++)
            {
                if(nums[j]<=que[i]) ans[i]=j+1;
                else break;
            }
        }
        return ans;
    }
};