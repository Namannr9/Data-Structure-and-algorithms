class Solution {
public:
    string convert(string s, int n) 
    {
        vector<string> v(n,"");
        if(n==1) return s;
        int curRow=0;
        int goDown=0;
        for(char c:s)
        {
            v[curRow]+=c;
            if(curRow==0 || curRow==n-1) goDown=!goDown;
            curRow+=goDown ? 1 : -1;
        }
        
        string ans="";
        for(string a:v) ans+=a;
        return ans;
        
    }
};