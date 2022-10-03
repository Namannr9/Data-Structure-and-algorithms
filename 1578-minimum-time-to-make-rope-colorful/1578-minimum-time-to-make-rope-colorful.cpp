class Solution {
public:
    int minCost(string colors, vector<int>& time) 
    {
        int ans=0;
        char pre=colors[0];
        for(int i=1;i<colors.size();i++)
        {
            if(pre==colors[i])
            {
                ans+=min(time[i-1],time[i]);
                time[i]=max(time[i-1],time[i]);
            }
            pre=colors[i];
        }
        return ans;
    }
};