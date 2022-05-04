// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    
    long long merge(long long arr[],long long left,long long mid,long long right)
    {
        long long invCount=0;
        long long i=left;
        long long j=mid+1;
        long long k=0;
        long long tmp[right-left+1];
                

        while(i<=mid && j<=right)
        {
            if(arr[i]>arr[j])
            {
                invCount+=(mid-i+1);
                
                tmp[k++]=arr[j++];
                
            }
            else
            {
                tmp[k++]=arr[i++];
            }
        }
        
        while(i<=mid)
        {
            tmp[k++]=arr[i++];
        }
        while(j<=right)
        {
            tmp[k++]=arr[j++];
        }
        for(int t=left;t<=right;t++)
        {
            arr[t]=tmp[t-left];
        }
        return invCount;
    }
    
    
    
    long long mergeSort(long long arr[],long long left,long long right)
    {
        if(left>=right)
        {
            return 0;
        }
        long long invCount=0;
        long long mid=left+(right-left)/2;
        invCount+=mergeSort(arr,left,mid);
        invCount+=mergeSort(arr,mid+1,right);
        invCount+=merge(arr,left,mid,right);
        return invCount;
    }
    
        
    long long int inversionCount(long long arr[], long long N)
    {
        return mergeSort(arr,0,N-1);
    }

};

// { Driver Code Starts.

int main() {
    
    long long T;
    cin >> T;
    
    while(T--){
        long long N;
        cin >> N;
        
        long long A[N];
        for(long long i = 0;i<N;i++){
            cin >> A[i];
        }
        Solution obj;
        cout << obj.inversionCount(A,N) << endl;
    }
    
    return 0;
}
  // } Driver Code Ends