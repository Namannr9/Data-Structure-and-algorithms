// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
	public:
	/*
	vis vector store the frequency of character
	In queue we store non repeating element
	*/
		string FirstNonRepeating(string s)
		{
		    queue<char> q;
		    vector<int> vis(26,0);
		    string ans="";
	
		    
		    for(int i=0;i<s.size();i++)
		    {
		        q.push(s[i]);
		        vis[s[i]-'a']++;
		        
		        while(q.size())
		        {
		            if(vis[q.front()-'a']>1) q.pop();
		            else break;
		        }
		        
		        if(q.size()) ans+=q.front();
		        else ans+="#";
		    }
		    return ans;
		}

};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string A;
		cin >> A;
		Solution obj;
		string ans = obj.FirstNonRepeating(A);
		cout << ans << "\n";
	}
	return 0;
}  // } Driver Code Ends