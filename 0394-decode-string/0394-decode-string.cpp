class Solution {
public:
    string decodeString(string s) 
    {
        stack<char> stk;
        
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!=']')
            {
                stk.push(s[i]);
            }
            else
            {
                string tmp="";
                
                while(stk.top()!='[')
                {
                    tmp=stk.top()+tmp;
                    stk.pop();
                }
                
                stk.pop(); // to remove ]
                
                string times="";
                
                while(stk.size() && isdigit(stk.top()))
                {
                    times=stk.top()+times;
                    stk.pop();
                }
                
                int t=stoi(times); // "3"->3;
                
                while(t--)
                {
                    for(int j=0;j<tmp.size();j++)
                    {
                        stk.push(tmp[j]);
                    }
                }
            }

            
        }
        string ans="";
            while(stk.size())
            {
                ans=stk.top()+ans;
                stk.pop();
            }
            
            return ans;
    }
};