// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution {
  public:
    string findPalindrome(string s,int left,int right)
    {
        int n=s.size();
        while(left>=0 && right<n && s[left]==s[right])
        {
            left--;
            right++;
        }
        return s.substr(left+1,right-left-1);
    }
    string longestPalin (string s) 
    {
      if(s.size()<2) return s;
      string ans="";
      ans+=s[0];
      for(int i=0;i<s.size()-1;i++)
      {
          string odd=findPalindrome(s,i,i);
          string even=findPalindrome(s,i,i+1);
        //  cout<<"odd "<<odd<<endl;
        //  cout<<"even "<<even<<endl;
          if(odd.size() > ans.size()) ans=odd;
          if(even.size() > ans.size()) ans=even;
      }
      return ans;
      
    }
};

// { Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;
        
        Solution ob;
        cout << ob.longestPalin (S) << endl;
    }
}
// Contributed By: Pranay Bansal
  // } Driver Code Ends