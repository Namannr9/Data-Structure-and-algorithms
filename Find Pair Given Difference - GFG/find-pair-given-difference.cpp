// { Driver Code Starts
#include<bits/stdc++.h>
 
using namespace std; 


bool findPair(int arr[], int size, int n);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l,n;
        cin>>l>>n;
        int arr[l];
        for(int i=0;i<l;i++)
            cin>>arr[i];
        if(findPair(arr, l, n))
            cout<<1<<endl;
        else cout<<"-1"<<endl;
    }
    
  
    return 0;
}// } Driver Code Ends


bool findPair(int arr[], int size, int diff)
{
    sort(arr,arr+size);
    int low=0;
    int high=1;
    while(low<size && high<size)
    {
        
        if(arr[high]-arr[low]==diff && low<high) return true; //low <high in case of diff ==zero
        else if(arr[high]-arr[low]>diff) low++;
        else high++;
    }
    return false;
    
    
    
}