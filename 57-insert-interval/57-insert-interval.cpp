class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) 
    {
        vector<vector<int>> ans;
        int n=intervals.size();
        int i=0;
        while(i<n && intervals[i][1]<newInterval[0])
        {
            ans.push_back(intervals[i]);
            i++;
        }
        
        while(i<n && intervals[i][0]<=newInterval[1])
        {
            newInterval[0]=min(newInterval[0],intervals[i][0]);
            newInterval[1]=max(newInterval[1],intervals[i][1]);
            i++;
        }
        ans.push_back(newInterval);
        
        while(i<n) ans.push_back(intervals[i++]);
        
        return ans;
        
        
    }
};

/*
    insert newInterval in old intervals and again sort them and using mergeinterval strategy solve it.
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
*/