// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// Function to return minimum number of jumps to end of array

class Solution{
  public:
    int minJumps(int arr[], int n)
    {
        int maxReach=0;
        int jumps=0;
        int steps=0;
        for(int i=0;i<n-1;i++)
        {
            if(arr[i]+i>maxReach)
            {
                maxReach=arr[i]+i;
            }
            
            if(steps==i)
            {
                jumps++;
                steps=maxReach;
            }
            
            if(arr[i]==0 && i==maxReach) return-1;
            
        }
        return jumps;
        
    }
};


// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution obj;
        cout<<obj.minJumps(arr, n)<<endl;
    }
    return 0;
}
  // } Driver Code Ends