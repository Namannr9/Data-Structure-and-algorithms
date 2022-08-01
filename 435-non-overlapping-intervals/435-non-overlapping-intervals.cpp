class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) 
    {
        if(intervals.size()==1) return 0;
        sort(intervals.begin(),intervals.end());
        int preEnd=intervals[0][1];
        int count=0;
        for(int i=1;i<intervals.size();i++)
        {
            if(preEnd<=intervals[i][0]) 
            {
                preEnd=intervals[i][1];
            }
            else
            {
                count++;
                preEnd=min(preEnd,intervals[i][1]);
                // [1,2] and [1,3] so we remove [1,3]
            }
        }
        return count;
    }
};