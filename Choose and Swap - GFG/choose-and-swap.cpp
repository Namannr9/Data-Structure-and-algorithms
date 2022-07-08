// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
public:
    string chooseandswap(string x)
    {
        string y=x;
        sort(y.begin(),y.end());
        int n=x.size();
        int i=0;
        int j=0;
        while(i<n && j<n)
        {
            if(x[i]==y[j])
            {
                while(x[i]==y[j]) j++;
                i++;
            }
            else if (x[i]>y[j]) break;
            else i++;
        }
        
        if(i>=n || j>=n) return x;
        
        char big=x[i];
        char small=y[j];
        
        string ans="";
        for(int i=0;i<n;i++)
        {
            if(x[i]==big) ans+=small;
            else if(x[i]==small) ans+=big;
            else ans+=x[i];
        }
        return ans;
        
    }
    
};


// { Driver Code Starts.

int main()
{
    Solution obj;
	int t;
	cin >> t;
	while(t--)
	{	
	    string a;
		cin >> a;
		cout << obj.chooseandswap(a) << endl;
	}
	return 0;
}
  // } Driver Code Ends