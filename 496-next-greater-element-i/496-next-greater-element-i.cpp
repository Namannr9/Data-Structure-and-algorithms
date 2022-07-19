class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) 
    {
        vector<int> ans;
        stack<int> st;
        unordered_map<int,int> mp;
        st.push(-1);
        for(int i=nums2.size()-1;i>=0;i--)
        {
            while(st.top()!=-1 && st.top()<=nums2[i]) st.pop();
            mp[nums2[i]]=st.top();
            st.push(nums2[i]);
        }
        for(int a:nums1) ans.push_back(mp[a]);
        return ans;
            
    }
};