class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) 
    {
        vector<int> tmp=arr;
        
        sort(tmp.begin(),tmp.end());
        long long s1=0;
        long long s2=0;
        int ans=0;
        for(int i=0;i<arr.size();i++)
        {
            s1+=tmp[i];
            s2+=arr[i];
            if(s1==s2) ans++;
        }
        return ans;
    }
};