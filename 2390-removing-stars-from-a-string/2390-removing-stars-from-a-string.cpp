class Solution {
public:
    string removeStars(string s) 
    {
        stack<char> stk;
        
        for(char c:s)
        {
            if(c=='*')
            {
                if(stk.size()) stk.pop();
            }
            else stk.push(c);
        }
        
        string ans="";
        while(stk.size())
        {
            ans+=stk.top();
            stk.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};