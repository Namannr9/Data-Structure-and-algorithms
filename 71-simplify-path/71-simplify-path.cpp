class Solution {
public:
    // getline act as java split
    string simplifyPath(string path) 
    {
        string tmp;
        stringstream arr(path);
        vector<string> stk;
        while(getline(arr,tmp,'/'))
        {
            if(tmp=="" || tmp==".") continue;
            if(tmp=="..")
            {
                if(stk.size()) stk.pop_back();
            }
            else stk.push_back(tmp);
        }
        if(stk.size()==0) return "/";
        string ans;
        for(string s:stk) ans+="/"+s;
        return ans;
    }
};
/*
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
*/