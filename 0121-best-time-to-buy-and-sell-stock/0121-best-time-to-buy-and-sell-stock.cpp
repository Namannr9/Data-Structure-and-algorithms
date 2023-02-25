class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int ans=0;
        int mn=INT_MAX;
        for(int i=0;i<prices.size();i++)
        {
            int mn=min(mn,prices[i]);
            ans=max(ans,prices[i]-mn);
        }
        return ans;
    }
    /*
    brute force Time limit exceed
    int maxProfit(vector<int>& prices) 
    {
        int ans=0;
        int n=prices.size();
        for(int i=0;i<n;i++)
        {
            int buy=prices[i];
            for(int j=i+1;j<n;j++)
            {
                int sell=prices[j]-prices[i];
                ans=max(ans,sell);
            }
        }
        return ans;
    }
    */
};