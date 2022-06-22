class Solution {
public:
    // using max heap
    int findKthLargest(vector<int>& nums, int k) 
    {
        priority_queue<int> pq(nums.begin(),nums.end());
        for(int i=0;i<k-1;i++)
        {
            pq.pop();
        }
        return pq.top();
    }
    
    /*
    Using min heap
    int findKthLargest(vector<int>& nums, int k) 
    {
        priority_queue<int,vector<int>,greater<int>> pq;
        for(int i=0;i<nums.size();i++)
        {
            pq.push(nums[i]);
            if(pq.size() > k)
            {
                pq.pop();
            }
        }
        return pq.top();
    }
    */
};