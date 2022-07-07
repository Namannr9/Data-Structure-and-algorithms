// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
vector<int> find(int arr[], int n , int x )
{
    int first=-1;
    int last=-1;
    int left=0;
    int right=n-1;
    int mid;
    while(left<=right)
    {
        mid=(left+right)/2;
        if(arr[mid]==x)
        {
            first=mid;
            right=mid-1;
        }
        else if(arr[mid]>x)
        {
            right=mid-1;
        }
        else
        {
            left=mid+1;
        }
    }
    
    left=0;
    right=n-1;
    while(left<=right)
    {
        mid=(left+right)/2;
        if(arr[mid]==x)
        {
            last=mid;
            left=mid+1;
        }
        else if(arr[mid]>x)
        {
            right=mid-1;
        }
        else
        {
            left=mid+1;
        }
    }
    
    
    if(first!=-1 && last!=-1) return {first,last};
    return {-1,-1};
    

    
}

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}


  // } Driver Code Ends