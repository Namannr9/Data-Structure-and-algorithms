class Solution {
public:
    static bool cmp(vector<int> &a,vector<int> &b)
    {
        if(a[0]==b[0]) return a[1]>b[1];
        return a[0]<b[0];
    }
    int numberOfWeakCharacters(vector<vector<int>>& arr) 
    {
        sort(arr.begin(),arr.end(),cmp);
        int ans=0;
        
        int mx=INT_MIN;
        
        for(int i=arr.size()-1;i>=0;i--)
        {
            if(arr[i][1]<mx) ans++;
            mx=max(mx,arr[i][1]);
        }
        return ans;
        
       
    }
};