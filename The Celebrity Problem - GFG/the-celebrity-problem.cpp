// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution 
{
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& mat, int n) 
    {
        int i=0;
        int j=n-1;
        // this loop find assumed candidate for celebrity
        while(i<j)
        {
            if(mat[i][j]==1) i++;   // i knows j;
            else j--;     // i don't know j  it means j can not be a celebrity
        }
        
        int can=i;
        for(i=0;i<n;i++)
        {
            if(i!=can)
            {
                if(mat[i][can]==0 || mat[can][i]==1) return -1;
            }
        }
        return can;
        
    }
    /*
    int celebrity(vector<vector<int> >& mat, int n) 
    {
        vector<int> in(n,0);
        vector<int> out(n,0);
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(mat[i][j]==1)
                {
                    in[j]++;
                    out[i]++;
                }
            }
        }
        
        for(int i=0;i<n;i++)
        {
            if(in[i]==n-1 && out[i]==0) return i;
        }
        return -1;
        
        
    }
    */
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
        vector<vector<int> > M( n , vector<int> (n, 0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>M[i][j];
            }
        }
        Solution ob;
        cout<<ob.celebrity(M,n)<<endl;

    }
}
  // } Driver Code Ends