// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
/*You are required to complete this method */

class Solution{
  public:
  bool solve(int sum,int set,int target,int n,int k,int arr[],bool vis[])
  {
      if(sum>target/k) return false;
      if(set==k) return true;
      
      
      for(int i=0;i<n;i++)
      {
          if(!vis[i])
          {
              vis[i]=true;
              sum+=arr[i];
              int tmp=sum;
              if(tmp==target/k)
              {
                  tmp=0;
                  set++;
              }
              
              if(solve(tmp,set,target,n,k,arr,vis)) return true;
             
              if(sum==target/k) set--;
              sum-=arr[i];
              vis[i]=false;
              
              
          }
      }
      return false;
  }
    bool isKPartitionPossible(int arr[], int n, int k)
    {
         int target=0;
         for(int i=0;i<n;i++) target+=arr[i];
         if(target%k!=0) return false;
         
         bool vis[n];
         return solve(0,0,target,n,k,arr,vis);
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    	int n;
    	
    	cin>>n;
    	int a[n];
    	for(int i=0;i<n;i++)
    	cin>>a[i];
    	int k;
    	cin>>k;
    	Solution obj;
    	cout<<obj.isKPartitionPossible(a, n, k)<<endl;
    }
}  // } Driver Code Ends