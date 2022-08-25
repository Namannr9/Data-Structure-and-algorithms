class Solution {
public:
    bool checkValidString(string s) 
    {
        stack<int> par;
        stack<int> str;
        
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(') par.push(i);
            else if(s[i]=='*') str.push(i);
            else
            {
                if(par.size()) par.pop();
                else if(str.size()) str.pop();
                else return false;
            }
        }
        
        while(par.size() && str.size())
        {
            if(par.top() > str.top()) return false;
            
            str.pop();
            par.pop();
        }
        
        return par.empty();
            
    }
};