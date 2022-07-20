class Solution {
public:
    int findRadius(vector<int>& houses, vector<int>& heaters) 
    {
        sort(houses.begin(),houses.end());
        sort(heaters.begin(),heaters.end());
        int i=0;
        int j=0;
        int n=houses.size();
        int m=heaters.size();
        vector<int> dist(n,INT_MAX);
        
        // we are taking heat from right heater for every house
        for(;i<n;i++)
        {
            while(j<m && houses[i]>heaters[j]) j++;
            if(j==m) break;
            dist[i]=min(dist[i],heaters[j]-houses[i]);
        }
        
        // we are taking heat from left heater for every house
        for(i=n-1,j=m-1;i>=0;i--)
        {
            while(j>=0 && heaters[j]>houses[i]) j--;
            if(j<0) break;
            dist[i]=min(dist[i],houses[i]-heaters[j]);  // store minium from left heater and right heater;
        }
        
        int ans=0;
        for(int d:dist) ans=max(ans,d);
        
        return ans;
    }
};