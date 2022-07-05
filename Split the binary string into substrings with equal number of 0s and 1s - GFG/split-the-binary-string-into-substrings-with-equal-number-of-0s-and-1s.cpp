// { Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
    int maxSubStr(string s)
    {
        int cnt=0;
        int ans=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='0') cnt++;
            else cnt--;
            if(cnt==0) ans++;
        }
        //cout<<cnt<<endl;
        if(cnt) return -1;
        return ans;
    }
};


// { Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    string str;
	    cin >> str;
	    Solution ob;
	    int ans = ob.maxSubStr(str);
	    cout << ans<<endl;
	}
	return 0;
}
  // } Driver Code Ends