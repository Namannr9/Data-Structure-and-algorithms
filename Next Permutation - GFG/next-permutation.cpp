// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<int> nextPermutation(int n, vector<int> arr)
    {
        int l;
        int r;
        for(l=n-2;l>=0;l--)
        {
            if(arr[l]<arr[l+1]) break;
        }
        if(l<0) reverse(arr.begin(),arr.end());
        else
        {
            for(r=n-1;r>l;r--)
            {
                if(arr[r]>arr[l]) break;
            }
            swap(arr[r],arr[l]);
            reverse(arr.begin()+l+1,arr.end());
        }
        return arr;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        vector<int> ans = ob.nextPermutation(N, arr);
        for(int u: ans)
            cout<<u<<" ";
        cout<<"\n";
    }
    return 0;
}  // } Driver Code Ends