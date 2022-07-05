class Solution {
public:
    void bracket(vector<string>& v, string str, int o, int c, int n)
    {
        if(str.length() == n*2)
        {
            v.push_back(str);
            return ;
        }
        if(o < n)
            bracket(v, str+"(", o+1, c, n);
        if(c < o)
            bracket(v, str+")", o, c+1, n);
    }
    vector<string> generateParenthesis(int n) {
        vector<string> p ;
        bracket(p, "", 0, 0, n);
        return p ;
    }
};
/*
class Solution {
public:
    bool isValid(string s)
    {
        int sum=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(') sum++;
            else sum--;
            if(sum<0) return false;
        }
        return sum==0;
    }
    void solve(int index,int n,string &tmp,vector<string> &ans)
    {
        if(index==2*n)
        {
            if(isValid(tmp)) ans.push_back(tmp);
            return;
        }
        
        tmp[index]='(';
        solve(index+1,n,tmp,ans);
        tmp[index]=')';
        solve(index+1,n,tmp,ans);
    }
    vector<string> generateParenthesis(int n) 
    {
        vector<string> ans;
        string tmp(2*n,' ');
        solve(0,n,tmp,ans);
        return ans;
    }
};
*/