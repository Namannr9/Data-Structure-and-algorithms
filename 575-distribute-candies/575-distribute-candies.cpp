class Solution {
public:
    int distributeCandies(vector<int>& cd) 
    {
        unordered_set<int> st(cd.begin(),cd.end());
        return min(st.size(),cd.size()/2);
    }
};