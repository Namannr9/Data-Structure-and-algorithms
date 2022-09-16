class Solution {
public:
   vector<vector<int>> dp;
    
    int solve(int i, int n, int j, vector<int> &nums, vector<int> &M){
        
        if (j == M.size()) return 0;
        if (dp[i][j] != INT_MIN) return dp[i][j];
        
        // Left Side
        int left = solve(i + 1, n, j + 1, nums, M) + (nums[i] * M[j]);
        
        // Right Side
        int right = solve(i, n, j + 1, nums, M) + (nums[(n - 1) - (j - i)] * M[j]);
        
        return dp[i][j] = max(left, right);
    }
    
    int maximumScore(vector<int>& nums, vector<int>& M) {   
        int n = nums.size(), m = M.size();
        dp.resize(m + 1, vector<int>(m + 1, INT_MIN));
        return solve(0, n, 0, nums, M);
    }
 
    /*
    greedy approch wrong ans
    int maximumScore(vector<int>& nums, vector<int>& mul) 
    {
        int k=0;
        int m=mul.size();
        int l=0;
        int r=nums.size()-1;
        int ans=0;
        int tmp;
        while(k<m)
        {
            if(mul[k]>0)
            {
            if(nums[l]>nums[r]) tmp=nums[l++];
            else tmp=nums[r--];    
            }
            else
            {
            if(nums[l]<nums[r]) tmp=nums[l++];
            else tmp=nums[r--];    
            }
            cout<<tmp<<"*"<<mul[k]<<endl;
            tmp=tmp*mul[k++];
            ans+=tmp;
        }
        cout<<"___________________"<<endl;
        return ans;
            
    }
    */
};