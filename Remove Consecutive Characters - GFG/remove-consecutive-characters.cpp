// { Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 


 // } Driver Code Ends

class Solution{
    public:
    string removeConsecutiveCharacter(string S)
    {
        string ans="";
        ans+=S[0];
        
        for(int i=1;i<S.size();i++)
        {
            if(S[i-1]!=S[i])
            {
                ans+=S[i];
            }
        }
        return ans;
    }
    /*
    string removeConsecutiveCharacter(string S)
    {
        // code here.
        string ans="";
        ans+=S[0];
        char pre=S[0];
        for(int i=0;i<S.size();i++)
        {
            if(S[i]!=pre)
            {
                ans+=S[i];
                pre=S[i];
            }
        }
        return ans;
        
        
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
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.removeConsecutiveCharacter(s)<<endl;
    }
} 



  // } Driver Code Ends