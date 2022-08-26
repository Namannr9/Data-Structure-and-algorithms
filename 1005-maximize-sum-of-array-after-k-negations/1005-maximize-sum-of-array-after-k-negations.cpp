class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) 
    {
        priority_queue<int,vector<int>,greater<int>> pq;
    
        int sum=0;
        for(int num : nums)
        {
            pq.push(num);
            sum+=num;
        }
        while(k)
        {
            int a=pq.top();
            if(a==0) k--;
            else 
            {
                pq.pop();
                sum-=a;
                a=-a;
                k--;
                pq.push(a);
                sum+=a;
            }
            
        }
        

        return sum;
        
        
        
        
    }
};