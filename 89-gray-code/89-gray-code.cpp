class Solution {
public:
    vector<string> solve(int n)
    {
        if(n==1) return {"0","1"};
        
        vector<string> ans=solve(n-1);
        vector<string> main;
        
        for(int i=0;i<ans.size();i++)
        {
            main.push_back("0"+ans[i]);
        }
        for(int i=ans.size()-1;i>=0;i--)
        {
            main.push_back("1"+ans[i]);
        }
        return main;
    }
    vector<int> grayCode(int n) 
    {
        vector<string> ans=solve(n);    
        vector<int> res;
        
        for(int i=0;i<ans.size();i++)
        {
            int n=stoi(ans[i],0,2);
            res.push_back(n);
        }
        return res;
    }
};