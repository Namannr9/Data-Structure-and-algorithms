class Solution {
public:
    string convert(string s, int n) 
    {
        vector<string> tmp(n,"");
        if(n==1) return s;
        int index=0;
        int goDown=0;
        for(char c:s)
        {
            tmp[index]+=c;
            if(index==0 || index==n-1) goDown=!goDown;
            index+=goDown ? 1 : -1;
        }
        
        string ans="";
        for(string k : tmp)
        {
            ans+=k;
        }
        return ans;
        
    }
};