class Solution {
public:
    int earliestFullBloom(vector<int>& plantTime, vector<int>& growTime) 
    {
        vector<pair<int,int>> tmp;
        
        int n=plantTime.size();
        for(int i=0;i<n;i++)
        {
            tmp.push_back({growTime[i],plantTime[i]});
        }
        
        sort(tmp.begin(),tmp.end(),greater<pair<int,int>>());   // sort in descending order respect to grow time
        
        int prevPlantTime=0;
        int bloomTime;
        int maxBloomTime=0;
        for(int i=0;i<n;i++)
        {
            int growTime=tmp[i].first;
            int plantTime=tmp[i].second;
            
            prevPlantTime=prevPlantTime+plantTime;
            
            bloomTime=prevPlantTime+growTime+1;
            
            maxBloomTime=max(maxBloomTime,bloomTime);
        }
        
        return maxBloomTime-1;
        
    }
};