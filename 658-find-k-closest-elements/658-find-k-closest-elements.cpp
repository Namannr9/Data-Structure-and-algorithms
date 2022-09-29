class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) 
    {
        int left=0;
        int right=arr.size()-1;
        while(right-left>=k)
        {
            if(x-arr[left] <= arr[right]-x) right--;
            else left++;
        }
        
        vector<int> ans;
        for(int i=left;i<=right;i++) ans.push_back(arr[i]);
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