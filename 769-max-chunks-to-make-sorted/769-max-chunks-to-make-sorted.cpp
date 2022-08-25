class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) 
    {
        int s1=0;
        int s2=0;
        int n=arr.size();
        int ans=0;
        for(int i=0;i<n;i++)
        {
            s1+=arr[i];
            s2+=i;
            if(s1==s2) ans++;
        }
        return ans;
    }
};