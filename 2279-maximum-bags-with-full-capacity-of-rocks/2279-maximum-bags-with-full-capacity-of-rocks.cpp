class Solution {
public:
    static bool cmp(pair<int,int> &a,pair<int,int> &b)
    {
        return (a.first-a.second)<(b.first-b.second);
    }
    int maximumBags(vector<int>& cap, vector<int>& rocks, int addRocks)
    {
        vector<pair<int,int>> tmp;
        for(int i=0;i<cap.size();i++)
        {
            tmp.push_back({cap[i],rocks[i]});
        }
        sort(tmp.begin(),tmp.end(),cmp);
        int ans=0;
        for(int i=0;i<cap.size();i++)
        {
            int diff=tmp[i].first-tmp[i].second;
            if(diff<=addRocks)
            {
                ans++;
                addRocks-=diff;
            }
        }
        return ans;
    }
};