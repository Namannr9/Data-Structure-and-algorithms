// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define N 1000


 // } Driver Code Ends
// you are required to complete this function 
// function should print the required range
class node
{
    public:
    int data;
    int row;
    int col;
    node(int data,int row,int col)
    {
        this->data=data;
        this->row=row;
        this->col=col;
    }
    
};


struct compare
{
    bool operator()(node *a,node *b)
    {
        return a->data > b->data;
    }
};
class Solution{
    public:
    pair<int,int> findSmallestRange(int nums[][N], int n, int k)
    {
          //code here
          priority_queue<node *,vector<node *>,compare> pq;
          
          int maxi=INT_MIN;
          int mini=INT_MAX;
          
          for(int i=0;i<k;i++)
          {
              int data=nums[i][0];
              maxi=max(maxi,data);
              mini=min(mini,data);
              pq.push(new node(data,i,0));
          }
          
          int low=mini;
          int high=maxi;
          int row;
          int col;
          while(pq.size())
          {
              node *tmp=pq.top();
              pq.pop();
              
              mini=tmp->data;
              row=tmp->row;
              col=tmp->col;
              
              if(high-low > maxi-mini)
              {
                  high=maxi;
                  low=mini;
              }
              
              if(tmp->col+1 < n)
              {
                  maxi=max(maxi,nums[row][col+1]);
                  pq.push(new node(nums[row][col+1],row,col+1));
              }
              else
              {
                  break;
              }
          
              
          }
          return {low,high};
          
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, k;
        cin>>n>>k;
        int arr[N][N];
        pair<int,int> rangee;
        for(int i=0; i<k; i++)
            for(int j=0; j<n; j++)
                cin>>arr[i][j];
        Solution obj;
	    rangee = obj.findSmallestRange(arr, n, k);
	    cout<<rangee.first<<" "<<rangee.second<<"\n";
    }   
	return 0;
}

  // } Driver Code Ends