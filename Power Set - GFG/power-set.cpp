// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
	public:
	void solve(int i,string tmp,string &s,vector<string> &ans)
	{
	    if(i==s.size())
	    {
	        if(tmp.size()) ans.push_back(tmp);
	        return;
	    }
	    
	    // pick the element
	    
	    solve(i+1,tmp+s[i],s,ans);
	    
	    // not pick the element
	    
	    solve(i+1,tmp,s,ans);
	}
		vector<string> AllPossibleStrings(string s)
		{
		   string tmp="";
		   int i=0;
		   vector<string> ans;
		   solve(i,tmp,s,ans);
		   sort(ans.begin(),ans.end());
		   return ans;
		}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string s;
		cin >> s;
		Solution ob;
		vector<string> res = ob.AllPossibleStrings(s);
		for(auto i : res)
			cout << i <<" ";
		cout << "\n";

	}
	return 0;
}  // } Driver Code Ends