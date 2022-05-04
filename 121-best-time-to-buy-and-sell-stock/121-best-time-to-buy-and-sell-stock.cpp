class Solution {
public:
    
    // brute force -> run loops select i item for buy
    // j for sale and find maximum profit
    
    
    // optimize->
    // lmin->overall minium up till i
    // cost=sale item at present day
    // profit=overall maximum profit
    int maxProfit(vector<int>& prices) 
    {
        int lmin=prices[0];
        int cost=0;
        int profit=0;
        int n=prices.size();
        for(int i=1;i<n;i++)
        {
            cost=prices[i]-lmin;
            profit=max(profit,cost);
            lmin=min(lmin,prices[i]);
        }
        return profit;
    }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
  
};