class Solution {
public:
    void solve(string s,unordered_map<string,int> &mp,vector<string> &ans,int minRemoval)
    {
        if(mp[s]) return;
        mp[s]=true;
        
        if(minRemoval==0)
        {
            int k=findRemoval(s);
            if(k==0)
            {
                ans.push_back(s);
                return;
            }
        }
        
        for(int i=0;i<s.size();i++)
        {
            string left=s.substr(0,i);
            string right=s.substr(i+1);
            string join=left+right;
            solve(join,mp,ans,minRemoval-1);
        }
    }
    int findRemoval(string s)
    {
        int sum=0;
        int count=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(') sum++;
            else if(s[i]==')') sum--;
            if(sum<0)
            {
                count++;
                sum=0;
            }
        }
        return count+abs(sum);
    }
    vector<string> removeInvalidParentheses(string s) 
    {
        unordered_map<string,int> mp;
        vector<string> ans;
        int minRemoval=findRemoval(s);
        solve(s,mp,ans,minRemoval);
        return ans;
    }
};