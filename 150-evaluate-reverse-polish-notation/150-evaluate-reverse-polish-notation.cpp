class Solution {
public:
    int evalRPN(vector<string>& tokens) 
    {
        stack<int> stk;
        for(string s:tokens)
        {
            
            if(s.size()>1 || isdigit(s[0])) stk.push(stoi(s));
            else
            {
                long b=stk.top();
                stk.pop();
                long a=stk.top();
                stk.pop();
                
                switch(s[0])
                {
                    case '+' : a+=b; break;
                    case '-' : a-=b; break;
                    case '*' : a*=b; break;
                    case '/' : a/=b; break;
                }
                stk.push(a);
            }
        }
        return stk.top();
    }
};