class Solution {
public:
    
    int find(int node,vector<int> &par)
    {
        if(node==par[node]) return node;
        return par[node]=find(par[node],par);
    }
    
    string smallestEquivalentString(string a, string b, string base) 
    {
        vector<int> par(26);
        for(int i=0;i<26;i++) par[i]=i;
        
        for(int i=0;i<a.size();i++)
        {
            int x=find(a[i]-'a',par);
            int y=find(b[i]-'a',par);
            
            if(x!=y)
            {
                par[max(x,y)]=min(x,y);
            }
        }
        
        string ans;
        for(char c : base)
        {
            ans.push_back(find(c-'a',par)+'a');
        }
        
        return ans;
    }
};