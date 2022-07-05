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