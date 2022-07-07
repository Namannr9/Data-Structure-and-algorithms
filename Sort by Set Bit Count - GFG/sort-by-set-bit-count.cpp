// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    int count(int num)
    {
        int c=0;
        while(num)
        {
            num=num & num-1;
            c++;
        }
        return c;
    }
    
    static bool cmp(pair<int,int> a,pair<int,int> b)
    {
        int x=a.first;
        int y=b.first;
        
        if(x==y) return x<y;  // if no of bits are same then sort those number in ascending order
        
        return x>y;  // else sort in descending order
    }
    void sortBySetBitCount(int arr[], int n)
    {
        vector<pair<int,int>> v;
        for(int i=0;i<n;i++)
        {
            int bits=count(arr[i]);
            v.push_back({bits,arr[i]});
        }
        
        stable_sort(v.begin(),v.end(),cmp);
        
        for(int i=0;i<n;i++)
        {
            arr[i]=v[i].second;
        }
        
        
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        Solution ob;
        ob.sortBySetBitCount(arr, n);
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
    return 0;
}
  // } Driver Code Ends