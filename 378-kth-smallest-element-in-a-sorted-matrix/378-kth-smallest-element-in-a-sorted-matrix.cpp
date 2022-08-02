class Solution {
public:
    int count(int mid,vector<vector<int>> &matrix)
    {
        int n=matrix.size();
        int i=n-1;
        int j=0;
        int cnt=0;
        while(i>=0 && j<n)
        {
            if(matrix[i][j]>mid) i--;
            else
            {
                cnt+=(i+1);
                j++;
            }
        }
        return cnt;
    }
    int kthSmallest(vector<vector<int>>& matrix, int k) 
    {
        int n=matrix.size();
        int low=matrix[0][0];
        int high=matrix[n-1][n-1];
        while(low<high)
        {
            int mid=low+(high-low)/2;
            if(count(mid,matrix)<k)
            {
              low=mid+1;  
            } 
            else
            {
                high=mid;
            }
        }
        return low;
    }
    /*
    int kthSmallest(vector<vector<int>>& matrix, int k) 
    {
        priority_queue<int> pq;
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
                pq.push(matrix[i][j]);
                if(pq.size()>k) pq.pop();
            }
        }
        return pq.top();
    }
    */
};