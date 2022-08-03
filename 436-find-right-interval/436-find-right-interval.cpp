class Solution {
public:
    /*
    lower_bound provide the refrence of next greater element which we are looking for
    and it works in ordered map only
    */
    vector<int> findRightInterval(vector<vector<int>>& intervals) 
    {
        int n=intervals.size();
        vector<int> ans(n,-1);
        map<int,int> mp;
        
        for(int i=0;i<n;i++)
        {
            mp[intervals[i][0]]=i;
        }
        for(int i=0;i<n;i++)
        {
            int end=intervals[i][1];
            map<int,int>::iterator pos=mp.lower_bound(end);   // auto pos == map<int,int>:: iterator
            if(pos!=mp.end())
            {
                ans[i]=pos->second;
            }
        }
        return ans;
        
    }
    /*
    vector<int> findRightInterval(vector<vector<int>>& intervals) 
    {
        int n=intervals.size();
        vector<int> ans(n);
        for(int i=0;i<n;i++)
        {
            int index=-1;
            int minn=INT_MAX;
            for(int j=0;j<n;j++)
            {
                if(intervals[j][0]>=intervals[i][1] && minn>intervals[j][0])
                {
                    minn=intervals[j][0];
                    index=j;
                }
                ans[i]=index;
            }
        }
        return ans;
    }
    */
};