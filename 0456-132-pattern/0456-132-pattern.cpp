class Solution {
public:
    bool find132pattern(vector<int>& nums) 
    {
        int s3=INT_MIN;
        int n=nums.size();
        stack<int> st;
        for(int i=n-1;i>=0;i--)
        {
            
            if(s3>nums[i]) return true;
            else
            {
                while(st.size() && nums[i]>st.top())
                {
                    s3=st.top();
                    st.pop();
                }
                st.push(nums[i]);
            }
        }
        return false;
    }
};