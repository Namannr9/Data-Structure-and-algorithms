class Solution {
public:
    int shortestSubarray(vector<int>& nums, int k) 
    {
        deque<int> dq;
        int ans=INT_MAX;
        vector<long long> tmp(nums.size(),0);
        tmp[0]=nums[0];
        for(int i=0;i<nums.size();i++)
        {
            if(i>0) tmp[i]=nums[i]+tmp[i-1];
            
            if(tmp[i]>=k) ans=min(ans,i+1);
            
            while(dq.size() && tmp[i]-tmp[dq.front()]>=k) 
            {
                ans=min(ans,i-dq.front());
                dq.pop_front();
            }
            
            while(dq.size() && tmp[i]<=tmp[dq.back()])
            {
                dq.pop_back();
            }
            
            dq.push_back(i);
        }
        
        if(ans==INT_MAX) return -1;
        
        return ans;
    }
};
    
    