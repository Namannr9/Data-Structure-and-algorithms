class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) 
    {
        stack<int> st;
        for(int i=nums.size()-1;i>=0;i--) st.push(nums[i]);
        vector<int> ans(nums.size());
        for(int i=nums.size()-1;i>=0;i--)
        {
            while(!st.empty() && st.top()<=nums[i]) st.pop();
            if(st.empty()) ans[i]=-1;
            else ans[i]=st.top();
            st.push(nums[i]);
        }
        return ans;
    }
    /*
    Time complexcity O(n^2)
    Space O(1);
    vector<int> nextGreaterElements(vector<int>& nums) 
    {
        int n=nums.size();
        vector<int> ans(n);    
        
        for(int i=0;i<n;i++)
        {
            ans[i]=-1;
            for(int j=1;j<n;j++)
            {
                if(nums[(i+j)%n]>nums[i])
                {
                    ans[i]=nums[(i+j)%n];
                    break;
                }
            }
        }
        return ans;
    }
    */
};