class Solution {
public:
    string removeDuplicates(string s, int k) 
    {
        stack<pair<char,int>> stk;
        
        string ans="";
        
        for(int i=0;i<s.size();i++)
        {
            if(stk.empty()) stk.push({s[i],1});
            else
            {
                if(s[i]==stk.top().first)
                {
                    auto p=stk.top();
                    stk.pop();
                    p.second++;
                    if(p.second==k) continue;
                    else stk.push(p);
                }
                else
                {
                    stk.push({s[i],1});
                }
            }
        }
        
        while(stk.size())
        {
            auto p=stk.top();
            stk.pop();
            
            string tmp(p.second,p.first);  // string tmp(4,'c') -> cccc
            
            ans+=tmp;
        }
        
        reverse(ans.begin(),ans.end());
        return ans;
        
        
    }
};