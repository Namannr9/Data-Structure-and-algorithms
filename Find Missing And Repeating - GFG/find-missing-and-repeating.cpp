// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
class Solution{
public:
    int *findTwoElement(int *arr, int n) 
    {
        int *ans=new int[2];
        sort(arr,arr+n);
        int rep=-1;
        int mis=1;
        for(int i=0;i<n;i++)
        {
            if(i+1 < n && arr[i]==arr[i+1]) rep=arr[i];
            if(arr[i]==mis) mis++;
        }
        ans[0]=rep;
        ans[1]=mis;
        return ans;
        
    }

    /*
    Using map
    int *findTwoElement(int *arr, int n) 
    {
        map<int,int> mp;
        int *ans=new int[2];
        for(int i=0;i<n;i++)
        {
            mp[arr[i]]++;
        }
        for(int i=1;i<=n;i++)
        {
            if(mp[i]==2) ans[0]=i;
            if(mp[i]==0) ans[1]=i;
        }
        return ans;
    }
    */
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}  // } Driver Code Ends