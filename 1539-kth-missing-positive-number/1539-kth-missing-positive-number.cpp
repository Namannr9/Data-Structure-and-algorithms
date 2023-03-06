class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) 
    {
        int n=0;
        int i=1;
        while(n<arr.size())
        {
            while(i!=arr[n])
            {
                
                k--;
                if(k==0) return i;
                i++;
                
            }
            n++;
            i++;
        }
        if(n==arr.size()) return arr[n-1]+k;
        return -1;
        
    }
};