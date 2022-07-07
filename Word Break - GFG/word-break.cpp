// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

// A : given string to search
// B : vector of available strings

class Solution
{
public:
    int solve(string a,vector<string> &dict)
    {
        if(a.size()==0) return true;
        
        for(int i=1;i<=a.size();i++)
        {
            string left=a.substr(0,i);  // start from zero index ans length of i
            string right=a.substr(i);   // start from ith index and full length of string
            
            if(find(dict.begin(),dict.end(),left)!=dict.end() && solve(right,dict)) return 1;
        }
        return 0;
    }
    int wordBreak(string a, vector<string> &dict) 
    {
        return solve(a,dict);
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<string> dict;
        for(int i=0;i<n;i++){
            string S;
            cin>>S;
            dict.push_back(S);
        }
        string line;
        cin>>line;
        Solution ob;
        cout<<ob.wordBreak(line, dict)<<"\n";
    }
}
  // } Driver Code Ends