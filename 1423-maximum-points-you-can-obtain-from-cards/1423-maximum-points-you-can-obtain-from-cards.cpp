class Solution {
public:
    int maxScore(vector<int>& points, int k) 
    {
        int sum=0;
        int ans=0;
        
        for(int i=0;i<k;i++)
        {
            ans+=points[i];
        }
        sum=ans;
        int n=points.size();
        
        for(int i=k-1;i>=0;i--)
        {
            sum-=points[i];
            sum+=points[n+i-k];
            
            ans=max(ans,sum);
        }
        return ans;
    }
};