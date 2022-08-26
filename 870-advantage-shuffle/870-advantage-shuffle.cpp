class Solution {
public:
    vector<int> advantageCount(vector<int>& a, vector<int>& b) 
    {
        multiset<int> st(a.begin(),a.end());
        vector<int> ans;
        
        for(int i=0;i<b.size();i++)
        {
            auto it=st.upper_bound(b[i]);
            if(it==st.end()) it=st.begin();
            ans.push_back(*it);
            
            st.erase(it);
        }
        return ans;
    }
};