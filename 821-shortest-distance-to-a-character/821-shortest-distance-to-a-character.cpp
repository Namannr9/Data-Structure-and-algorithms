class Solution {
public:
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
};