class Solution {
public:
    char findParent(char c,unordered_map<char,char> &parent)
    {
        if(parent[c]!=c)
        {
            parent[c]=findParent(parent[c],parent);
        }
        return parent[c];
    }
    bool equationsPossible(vector<string>& eq) 
    {
        unordered_map<char,char> parent;
        
        // every element is parent of itself;
        for(string s:eq)
        {
            parent[s[0]]=s[0];
            parent[s[3]]=s[3];
        }
        
        
        for(string s:eq)
        {
            char a=findParent(s[0],parent);
            char b=findParent(s[3],parent);
            
            if(s[1]=='=') parent[b]=a;   // parent of b is a ( making union) because they belong to same group
        }
        
        for(string s:eq)
        {
            char a=findParent(s[0],parent);
            char b=findParent(s[3],parent);
            
            if(s[1]=='!' && a==b) return false;   // they a!=b and have same parent so we return false 
        }
        
        return true;
    }
    
        
};