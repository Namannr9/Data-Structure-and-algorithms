class Solution {
public:
    vector<int> count(string s)
    {
        vector<int> fre(26,0);
        for(char c:s) fre[c-'a']++;
        return fre;
    }
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) 
    {
        vector<int> store(26,0);
        vector<string> ans;
        for(string s:words2)
        {
            vector<int> fre=count(s);
            for(int i=0;i<26;i++) store[i]=max(store[i],fre[i]);
        }
        
        for(string s:words1)
        {
            vector<int> fre=count(s);
            int i=0;
            for(;i<26;i++) if(store[i]>fre[i]) break;
            if(i==26) ans.push_back(s);
        }
        return ans;
    }
};