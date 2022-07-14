// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


class Array
{
public:
    template <class T>
    static void input(vector<T> &A,int n)
    {
        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
        }
    }
 
    template <class T>
    static void print(vector<T> &A)
    {
        for (int i = 0; i < A.size(); i++)
        {
            if(i!=A.size()-1) cout << A[i]<< " ";
            else cout << A[i];
        }
        cout << endl;
    }
};


 // } Driver Code Ends
class Solution {
  public:
  void solve(string s,unordered_map<string,bool> &mp,int minRemoval,vector<string> &ans)
  {
      if(mp[s]) return;
      mp[s]=true;
      
      if(minRemoval==0)
      {
          int final=findRemoval(s);
          if(final==0)   // nothing to be removed we get the answer
          {
              ans.push_back(s);
              return;
          }
      }
      
      for(int i=0;i<s.size();i++)
      {
          string left=s.substr(0,i);
          string right=s.substr(i+1);
          string join=left+right;
          solve(join,mp,minRemoval-1,ans);
      }
  }
  
  
    int findRemoval(string s)
    {
        int sum=0;
        int count=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(') sum++;
            else if(s[i]==')') sum--;
            if(sum<0)
            {
                count++;
                sum=0;
            }
            
        }
        return count+abs(sum);
    }
    vector<string> removeInvalidParentheses(string s) 
    {
        int minRemoval=findRemoval(s);
        unordered_map<string,bool> mp;
        vector<string> ans;
        solve(s,mp,minRemoval,ans);
        sort(ans.begin(),ans.end());
        return ans;
    }
};


// { Driver Code Starts.

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        
        string s; 
        cin>>s;
        
        Solution obj;
        vector<string> res = obj.removeInvalidParentheses(s);
        
        Array::print(res);
        
    }
}
  // } Driver Code Ends