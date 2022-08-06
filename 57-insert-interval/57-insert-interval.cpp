class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) 
    {
        intervals.push_back(newInterval);
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> ans;
        vector<int> cur=intervals[0];
        for(auto v:intervals)
        {
            if(v[0]<=cur[1])
            {
                cur[1]=max(v[1],cur[1]);
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