// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int minValue(string s, int k)
    {
        priority_queue<int> pq;
        vector<int> count(26,0);
        for(int i=0;i<s.size();i++)
        {
            count[s[i]-'a']++;
        }
        
        for(int i=0;i<26;i++)
        {
            if(count[i]>0) pq.push(count[i]);
        }
        
        while(k--)
        {
            int tmp=pq.top();
            pq.pop();
            tmp--;
            pq.push(tmp);
        }
        
        int ans=0;
        while(pq.size())
        {
            int c=pq.top();
            pq.pop();
            ans+=c*c;
        }
        return ans;
        
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        int k;
        cin>>s>>k;
        
        Solution ob;
        cout<<ob.minValue(s, k)<<"\n";
    }
    return 0;
}  // } Driver Code Ends