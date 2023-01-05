class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) 
    {
        sort(points.begin(),points.end());
        int n=points.size();
        int ans=n;
        int pre=points[0][1];
        for(int i=1;i<n;i++)
        {
            if(points[i][0]<=pre)
            {
                pre=min(pre,points[i][1]);
                ans--;
            }
            else
            {
                pre=points[i][1];
            }
        }
        return ans;
    }
    
};