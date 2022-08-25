class Solution {
public:
    bool checkValidString(string s) {
        stack<int> asterisk;
        stack<int> validPar;
        
        for(int i = 0; i < s.length(); i++){
            if(s[i] == '(') validPar.push(i);
            if(s[i] == '*') asterisk.push(i);
            if(s[i] == ')'){
                if(!validPar.empty()) 
                    validPar.pop();
                else if(!asterisk.empty()) 
                    asterisk.pop();
                else 
                    return false;
            }
        }
        
        while(!validPar.empty() && !asterisk.empty()){
           if(validPar.top() > asterisk.top()) return false;
            
            validPar.pop(); asterisk.pop();
        }
        
        return validPar.empty();
    }
};
    /*
    bool validateString(string s)
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
    
    bool solve(int i,string tmp,string s,map<pair<int,string>,bool> &dp)
    {
        if(i>=s.size())
        {
            return validateString(tmp);
        }
        
        if(dp.find({i,tmp})!=dp.end()) return dp[{i,tmp}];
        //if(dp.find(tmp)!=dp.end()) return true; 
            
        if(s[i]=='*')
        {
            return dp[{i,tmp}]=solve(i+1,tmp,s,dp) || solve(i+1,tmp+")",s,dp) || solve(i+1,tmp+"(",s,dp);
        }
        return dp[{i,tmp}]=solve(i+1,tmp+s[i],s,dp);
    }
    bool checkValidString(string s) 
    {
        string tmp="";
        int n=s.size();
        map<pair<int,string>,bool> dp;
        int i=0;
        return solve(i,tmp,s,dp);
            
    }
    */
