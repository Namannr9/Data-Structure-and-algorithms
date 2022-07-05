// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
	public:
	  void solve(int index,string s,vector<string> &ans)
	    {
	        if(index>=s.size())
	        {
	            ans.push_back(s);
	            return;
	        }
	        for(int i=index;i<s.size();i++)
	        {
	            if(i!=index && s[i]==s[i-1]) continue;
    	        swap(s[index],s[i]);
	            solve(index+1,s,ans);
	            swap(s[index],s[i]);
	        }
	    }
		vector<string>find_permutation(string S)
		{
		    // Code here there
		    sort(S.begin(),S.end());
		    vector<string> ans;
		    solve(0,S,ans);
		    sort(ans.begin(),ans.end());
		    return ans;
		}
};



// { Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}
  // } Driver Code Ends