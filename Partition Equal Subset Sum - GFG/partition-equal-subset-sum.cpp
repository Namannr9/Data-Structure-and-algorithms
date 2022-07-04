// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int solve(int index,int n,int target,int arr[])
    {
        if(target<0 || index>=n) return 0;
        if(target==0) return 1;
        return solve(index+1,n,target-arr[index],arr) || solve(index+1,n,target,arr);
        
    }
    int equalPartition(int n, int arr[])
    {
       int sum=0;
       for(int i=0;i<n;i++) sum+=arr[i];
       if(sum%2!=0) return 0;
       return solve(0,n,sum/2,arr);
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        if(ob.equalPartition(N, arr))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}  // } Driver Code Ends