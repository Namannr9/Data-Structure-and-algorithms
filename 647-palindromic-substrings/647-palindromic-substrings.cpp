class Solution {
public:
    
    
    int solve(int i,int j,string s)
    {
        int count=0;
        while(i>=0 && j<s.size() && s[i]==s[j])
        {
           count++;
            i--;
            j++;
        }
        return count;
    }
    
    int countSubstrings(string s) 
    {
        int count=0;
        for(int i=0;i<s.size();i++)
        {
            count+=solve(i,i,s)+solve(i,i+1,s);
            
        }
        return count;
    }
    
    /*
    int countSubstrings(string s) 
    {
    
        int n=s.size();
        vector<vector<int>> dp(n,vector<int>(n,0));
        
        int count=0;
        for(int i=n-1;i>=0;i--)
        {
            for(int j=i;j<n;j++)
            {
                if(i==j) dp[i][j]=1;
                else if(i+1==j)
                {
                    dp[i][j]=(s[i]==s[j])?1:0;
                }
                else 
                {
                    dp[i][j]=(s[i]==s[j])?dp[i+1][j-1]:0;
                }
                count+=dp[i][j];
            }
        }
        return count;
    }
    
    
    */
    /*
    
    memoization code;
    int solve(int i,int j,string &s,vector<vector<int>> &dp)
    {
        if(i>=j) return 1;
        if(dp[i][j]!=-1) return dp[i][j];
        if(s[i]==s[j])
        {
            return dp[i][j]=solve(i+1,j-1,s,dp);
        }
        return dp[i][j]=0;  
    }

    int countSubstrings(string s) 
    {
        int n=s.size();
        vector<vector<int>> dp(n+1,vector<int>(n+1,-1));
        int count=0;
        for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j++)
            {
                count+=solve(i,j,s,dp);
            }
        }
        return count;
    }
    
    */


    
    
    /*
    
    Simple recursive code
    
    int solve(int i,int j,string &s)
    {
        if(i>=j) return 1;
        if(s[i]==s[j]) return solve(i+1,j-1,s);
        return 0;
    }
    int countSubstrings(string s) 
    {
        int count=0;
        for(int i=0;i<s.size();i++)
        {
            for(int j=i;j<s.size();j++)
            {
                count+=solve(i,j,s);
            }
        }
        return count;
    }

    */
};