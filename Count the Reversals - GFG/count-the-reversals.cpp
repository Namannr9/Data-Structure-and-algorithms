// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int countRev (string s);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        cout << countRev (s) << '\n';
    }
}

// Contributed By: Pranay Bansal// } Driver Code Ends



int countRev (string s)
{
    if(s.size()%2) return -1;
    int open=0;
    int close=0;
    stack<char> stk;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='{')
        {
            stk.push(s[i]);
            close++;                   // we require an close bracket
        }
        else if(stk.size()==0) open++;   // } this will come and we require an open bracket
        else if(stk.top()=='{')
        {
            stk.pop();
            close--;
        }
    }
    
    if(open%2) open=(open/2)+1;
    else open=open/2;
    if(close%2) close=(close/2)+1;
    else close=close/2;
    
    return open+close;
    
}