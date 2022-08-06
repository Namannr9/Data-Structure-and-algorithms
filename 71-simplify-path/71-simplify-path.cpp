class Solution {
public:
    string simplifyPath(string path) 
    {
        int n=path.size();
        stack<string> stk;
        for(int i=0;i<n;i++)
        {
            if(path[i]=='/') continue;
            string tmp="";
            while(i<n && path[i]!='/') tmp+=path[i++];
            if(tmp==".") continue;
            if(tmp=="..")
            {
                if(stk.size()) stk.pop();
            }
            else stk.push(tmp);
        }
        if(stk.empty()) return "/";
        string ans="";
        while(!stk.empty())
        {
            ans="/"+stk.top()+ans;
            stk.pop();
        }
        return ans;
    }
    
    
    
    
};