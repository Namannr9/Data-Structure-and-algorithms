class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) 
    {
        vector<vector<int>> ans;
        sort(intervals.begin(),intervals.end());
        vector<int> cur=intervals[0];
        for(auto v:intervals)
        {
            if(v[0]<=cur[1])
            {
                cur[1]=max(cur[1],v[1]);
            }
            else
            {
                ans.push_back(cur);
                cur=v;
            }
        }
        ans.push_back(cur);
        return ans;
    }
};