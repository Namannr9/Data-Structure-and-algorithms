// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{   
public:
    vector<int> printKClosest(vector<int> arr, int n, int k, int x) 
    {
        vector<int>ans;
        
        int low=0,high=n-1;
        int notedindex,mid;
        while(low<=high){
          mid=(low+high)/2;
          
          if(arr[mid]==x){
              notedindex=mid;
            break;
          }else if(arr[mid]<x){
              low=mid+1;
          }else if(arr[mid]>x){
              high=mid-1;
          }
        }
int i,j;
        if(arr[mid]==x){
            i=mid-1;
            j=mid+1;
        }else{
            i=high;
            j=low;
        }
        //Time =log N +K
        //Space O(1)
        int count=0;
        while(count<k){
            int left=abs(x-arr[i]);
            int right=abs(x-arr[j]);
            if(i<0){
                ans.push_back(arr[j]);
                j++;
            }else if(j>=n){
                ans.push_back(arr[i]);
                i--;
            }
            else if(left<right && i>=0){
                ans.push_back(arr[i]);
                i--;
            }else if(left>=right && j<n){
                ans.push_back(arr[j]);
                j++;
            } 
            count++;
        }return ans;
    }
    
    /*
     vector<int> printKClosest(vector<int> arr, int n, int k, int x) 
    {
        priority_queue<pair<int,int>> pq;
        
        vector<int> ans;
        for(int i=0;i<n;i++)
        {
            int dif=abs(x-arr[i]);
            if(dif!=0) pq.push({dif,-1*arr[i]});
            if(pq.size() > k) pq.pop();
        }
        
        while(pq.size())
        {
            ans.push_back(-1*pq.top().second);
            pq.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
    */
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, x;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cin >> k >> x;
        Solution ob;
        auto ans = ob.printKClosest(arr, n, k, x);
        for (auto e : ans) {
            cout << e << " ";
        }
        cout << "\n";
    }
    return 0;
}
  // } Driver Code Ends