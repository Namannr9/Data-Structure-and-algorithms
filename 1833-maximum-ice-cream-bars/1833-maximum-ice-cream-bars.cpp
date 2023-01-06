class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) 
    {
        int ans=0;
        sort(costs.begin(),costs.end());
        for(int a : costs)
        {
            if(coins>=a)
            {
                coins-=a;
                ans++;
            }
            else break;
        }
        return ans;
    }
};