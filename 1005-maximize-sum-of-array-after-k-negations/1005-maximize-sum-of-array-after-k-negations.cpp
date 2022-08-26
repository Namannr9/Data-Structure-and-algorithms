class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) 
    {
        priority_queue<int,vector<int>,greater<int>> pq;
        
        for(int a:nums) pq.push(a);
        
        while(k)
        {
            int a=pq.top();
            if(a==0) k--;
            else 
            {
                pq.pop();
                a=-a;
                k--;
                pq.push(a);
            }
            
        }
        int sum=0;
        while(pq.size())
        {
            sum+=pq.top();
            pq.pop();
        }
        return sum;
        
        
        
        
    }
};