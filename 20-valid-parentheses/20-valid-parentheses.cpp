class Solution {
public:
    bool isValid(string s) 
    {
        int len=s.size();
        if(len%2) return false;
        stack<char> stk;
        for(int i=0;i<len;i++)
        {
            if(s[i]=='(' || s[i]=='[' || s[i]=='{') stk.push(s[i]);
            else
            {
                if(stk.size()==0) return false;
                char c=s[i];
                if((c==')' && stk.top()=='(') || (c==']' && stk.top()=='[') || (c=='}' && stk.top()=='{')) stk.pop();
                else return false;
            }
            
        }
        if(stk.size()) return false;
        return true;
    }
};