class Solution {
public:
    // first find dist with left c and then find dist with right c and update with min dist
    vector<int> shortestToChar(string s, char c) 
    {
        int n=s.size();
        vector<int> dist(n,0);
        int pos;
        for(int i=0;i<n;i++)
        {
            if(s[i]==c) pos=i;
            dist[i]=i-pos;
        }
        
        for(int i=pos-1;i>=0;i--)
        {
            if(s[i]==c) pos=i;
            dist[i]=min(dist[i],pos-i);
        }
        return dist;
    }
    /*
    Time complexcity o(n^2) worst case
    Space complexcity o(n) worst case
    vector<int> shortestToChar(string s, char c) 
    {
        vector<int> dist;
        for(int i=0;i<s.size();i++) 
        {
            if(s[i]==c) dist.push_back(i);
        }
        
        vector<int> ans;
        for(int i=0;i<s.size();i++)
        {
            int d=INT_MAX;
            for(int k=0;k<dist.size();k++)
            {
                d=min(d, abs(dist[k]-i));
            }
            ans.push_back(d);
        }
        return ans;              
    }
    */
};