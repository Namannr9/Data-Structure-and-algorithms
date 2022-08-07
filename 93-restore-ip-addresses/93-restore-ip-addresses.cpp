class Solution {
public:
    void solve(int index,int dot,string s,string pre,vector<string> &ans)
    {
        if(dot==4)
        {
            if(index>=s.size())
            {
                pre.pop_back(); // removing last dot
                ans.push_back(pre);
            }
            return;
        }
        
        string cur="";
        for(int i=index;i<s.size();i++)
        {
            if(cur=="0") return;
            
            cur=cur+s[i];
            
            if(stoi(cur)>=0 && stoi(cur)<=255)
            {
                string tmp=pre;
                pre=pre+cur+".";
                solve(i+1,dot+1,s,pre,ans);
                
                pre=tmp; // restore
            }
            else if(stoi(cur)>255) return;
        }
    }
    vector<string> restoreIpAddresses(string s) 
    {
        vector<string> ans;
        string pre="";
        solve(0,0,s,pre,ans);
        return ans;
    }
};