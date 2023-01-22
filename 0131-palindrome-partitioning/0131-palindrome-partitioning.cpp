class Solution {
public:
    bool isPalindrome(string &s,int l,int r)
    {
        while(l<r)
        {
            if(s[l++]!=s[r--]) return false;
        }
        return true;
    }
    void solve(int index,string &s,vector<string> &tmp,vector<vector<string>> &ans)
    {
        if(index==s.size())
        {
            ans.push_back(tmp);
            return;
        }
        
        for(int i=index;i<s.size();i++)
        {
            if(isPalindrome(s,index,i))
            {
                tmp.push_back(s.substr(index,i-index+1));
                solve(i+1,s,tmp,ans);
                tmp.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) 
    {
        vector<vector<string>> ans;
        vector<string> tmp;
        solve(0,s,tmp,ans);
        return ans;
    }
};