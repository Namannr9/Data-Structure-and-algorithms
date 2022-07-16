class Solution {
public:
    int longestConsecutive(vector<int>& nums) 
    {
        unordered_set<int> st;
        for(int a:nums) st.insert(a);
        int ans=0;
        for(int a:nums)
        {
            if(st.find(a-1)==st.end())
            {
                int count=1;
                int num=a+1;
                while(st.find(num)!=st.end())
                {
                    count++;
                    num++;
                }
                ans=max(ans,count);
            }
            
        }
        return ans;
    }
};