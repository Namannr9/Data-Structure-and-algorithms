class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) 
    {
        vector<vector<int>> ans;
        sort(intervals.begin(),intervals.end());
        if(intervals.size()==0) return ans;
        
        vector<int> pre=intervals[0];
        for(auto cur:intervals)
        {
            if(cur[0]<=pre[1]) 
            {
                pre[1]=max(pre[1],cur[1]);
            }
            else
            {
                ans.push_back(pre);
                pre=cur;
            }
        }
        ans.push_back(pre);
        return ans;
    }
};