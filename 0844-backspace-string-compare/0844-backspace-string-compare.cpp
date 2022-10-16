class Solution {
public:
    string solve(string s)
    {
        stack<char> stk;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='#')
            {
                if(stk.size()) stk.pop();
            }
            else stk.push(s[i]);
        }
        
        s="";
        while(stk.size())
        {
            s+=stk.top();
            stk.pop();
        }
        
        return s;
    }
    bool backspaceCompare(string s, string t) 
    {
        s=solve(s);
        t=solve(t);
        
        return s==t;
    }
};