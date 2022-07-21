class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) 
    {
        int n=arr.size();
        int left=0;
        int right=n-k;
        while(left<right)
        {
            int mid=(left+right)/2;
            if(x-arr[mid] > arr[mid+k]-x) left=mid+1;
            else right=mid;
        }
        vector<int> ans;
        for(int i=0;i<k;i++)
        {
            ans.push_back(arr[left+i]);
        }
        return ans;
        
    }
    /*
    vector<int> findClosestElements(vector<int>& arr, int k, int x) 
    {
        priority_queue<pair<int,int>> pq;
        
        for(int a:arr)
        {
            int dif=abs(a-x);
            pq.push({dif,a});
            if(pq.size()>k) pq.pop();
        }
        vector<int> ans;
        while(pq.size())
        {
            ans.push_back(pq.top().second);
            pq.pop();
        }
        sort(ans.begin(),ans.end());
        return ans;
        
    }
    */
};