class Solution {
public:
    
    /*
    in brute force approach we call isValid() for every substring and return maximum length of
    valid substring
    */
    int longestValidParentheses(string s) 
    {
        stack<int> stk;
        stk.push(-1);
        int ans=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
            {
                stk.push(i);
            }
            else // )
            {
                stk.pop();
                
                if(stk.size()==0)
                {
                    stk.push(i);
                }
                else
                {
                    int len=i-stk.top();
                    ans=max(ans,len);
                }
            }
        }
        return ans;
    }
};