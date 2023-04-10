class Solution {
public:
    bool isValid(string s) 
    {
        int len=s.size();
        if(len%2) return false;
        stack<char> stk;
        for(int i=0;i<len;i++)
        {
            char c=s[i];
            if(c=='(' || c=='[' || c=='{') stk.push(c);
            else 
            {
                if(stk.size()==0) return false;
                if(c==')' && stk.top()=='(' || c==']' && stk.top()=='[' || c=='}' && stk.top()=='{') stk.pop();
                else return false;
            }
        }
        if(stk.size()) return false;
        return true;
          
    }
};