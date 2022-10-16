class Solution {
public:
    int calculate(string s) 
    {
        stack<pair<long,int>> stk;
        
        long sum=0;
        int sign=1;    // start with positive sign
        
        for(int i=0;i<s.size();i++)
        {
            char c=s[i];
            
            if(isdigit(c))
            {
                long num=0;
                while(i<s.size() && isdigit(s[i]))
                {
                    num=(num*10) + s[i]-'0';
                    i++;
                }
                i--;
                
                sum+=(num*sign);
                sign=1;             // reset the sign
            }
            else if(c=='(')
            {
                stk.push({sum,sign});
                // reset the value 
                sum=0;
                sign=1;
            }
            else if(c==')')
            {
                sum=stk.top().first +(stk.top().second * sum);
                stk.pop();
            }
            else if(c=='-')
            {
                sign=(-1*sign); 
            }
        }
        return sum;
    }
};