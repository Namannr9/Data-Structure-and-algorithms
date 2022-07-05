// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    
    public:
    int transfigure (string A, string B)
    {
    	int arr[256]={0};
    	if(A.size()!=B.size()) return -1;
    	for(int i=0;i<A.size();i++)
    	{
    	    arr[A[i]]++;
    	    arr[B[i]]--;
    	}
    	for(int i=0;i<A.size();i++)
    	{
    	    if(arr[A[i]]!=0) return -1;
    	}
    	
    	int i=A.size();
    	int j=B.size(); 
    	int count=0;
    	while(i>=0)
    	{
    	    if(A[i]==B[j])
    	    {
    	        j--;
    	    }
    	    else
    	    {
    	        count++;
    	    }
    	    i--;
    	}
    	return count;
    }
};

// { Driver Code Starts.


int main () 
{
    int t; cin >> t;
    while (t--)
    {
        string A, B; 
        cin >> A >> B;
        Solution obj;
        cout << obj.transfigure (A, B) << endl;
    }
}  // } Driver Code Ends