class Solution {
public:
    string removeDuplicates(string s) 
    {
        stack<char> stk;
        
        for(char c:s)
        {
            if(stk.empty()) stk.push(c);
            else if(stk.top()==c) stk.pop();
            else stk.push(c);
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
/*
 string removeDuplicates(string s) 
    {
         string ans;
        for(char c: s)
        {
            if(ans.size()==0) ans.push_back(c);
            else if(c==ans.back()) ans.pop_back();
            else ans.push_back(c);
        }
        return ans;
    }
*/