class Solution {
public:
    bool matches(string a,string b)
    {
        unordered_map<char,char> AtoB;
        unordered_map<char,char> BtoA;
        
        for(int i=0;i<a.size();i++)
        {
            if((AtoB.count(a[i]) && AtoB[a[i]]!=b[i]) || (BtoA.count(b[i]) && BtoA[b[i]]!=a[i])) return false;
            else
            {
                AtoB[a[i]]=b[i];
                BtoA[b[i]]=a[i];
            }
        }
        return true;
        
        
    }
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) 
    {
        vector<string> ans;
        for(string str : words)
        {
            if(matches(str,pattern)) ans.push_back(str);
        }
        return ans;
    }
};