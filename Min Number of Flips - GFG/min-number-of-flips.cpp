// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int minFlips (string s);
int32_t main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;

        cout << minFlips (s) << endl;
    }
}
// Contributed By: Pranay Bansal
// } Driver Code Ends


int minFlips (string s)
{
    int one=0;
    int zero=0;
    int n=s.size();
    for(int i=0;i<n;i++)
    {
        if(i%2==0 && s[i]!='1')
        {
            one++;
        }
        if(i%2 && s[i]=='1') one++;
    }
    
    for(int i=0;i<n;i++)
    {
        if(i%2==0 && s[i]!='0')
        {
            zero++;
        }
        if(i%2 && s[i]=='0') zero++;
    }
    return min(one,zero);
}