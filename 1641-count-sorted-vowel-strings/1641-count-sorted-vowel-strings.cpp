class Solution {
public:
    
     int solve(int index,int len,int n,vector<vector<int>> &dp)
    {
        if(len==n) return 1;
        
        if(dp[index][len]!=0) return dp[index][len];
        for(int i=index;i<5;i++) dp[index][len]+=solve(i,len+1,n,dp);          
        return dp[index][len];
        
    }
    int countVowelStrings(int n) 
    {
        int len=0;
        vector<vector<int>> dp(5,vector<int>(n,0));
        return solve(0,len,n,dp);
    }
    /*
    int solve(int index,int n,vector<vector<int>> &dp)
    {
        if(n==0) return 1;
        if(dp[n][index]!=-1) return dp[n][index];
        int ans=0;
        for(int i=index;i<5;i++)
        {
            ans+=solve(i,n-1,dp);
        }
        return dp[n][index]=ans;
    }
    int countVowelStrings(int n) 
    {
        vector<vector<int>> dp(n+1,vector<int>(5,-1));
        return solve(0,n,dp);
    }
    */
    
    
    /*
    int solve(int index,int len,int &ans,int n,vector<vector<int>> &dp)
    {
        if(len==n) 
        {
            
            return 1;
        }
        if(dp[index][len]!=0) return dp[index][len];
        for(int i=index;i<5;i++) dp[index][len]+=solve(i,len+1,ans,n,dp);          
        return dp[index][len];
        
    }
    int countVowelStrings(int n) 
    {
        int ans=0;
        int len=0;
        vector<vector<int>> dp(5,vector<int>(n,0));
        return solve(0,len,ans,n,dp);
    }
    */
    /*
     void solve(int index,int len,int n,int &ans,string ds,string vov)
    {
        if(len==n)
        {
            ans++;
            return;
        }
        
        for(int i=index;i<5;i++)
        {
            //ds.push_back(vov[i]);
            solve(i,len+1,n,ans,ds,vov);
            //cout<<ds<<endl;
            //ds.pop_back();
        }
    }
    int countVowelStrings(int n) 
    {
        string vov="aeiou";
        int ans=0;
        string ds="";
        int len=0;
        solve(0,len,n,ans,ds,vov);
    
            
        return ans;
    }
    
    */
    
    /*
     void solve(int index,int n,int &ans,string ds,string vov)
    {
        if(ds.size()==n)
        {
            ans++;
            return;
        }
        
        for(int i=index;i<5;i++)
        {
            //ds.push_back(vov[i]);
            solve(i,n,ans,ds,vov);
            //cout<<ds<<endl;
            ds.pop_back();
        }
    }
    int countVowelStrings(int n) 
    {
        string vov="aeiou";
        int ans=0;
        string ds="";
        
        solve(0,n,ans,ds,vov);
    
            
        return ans;
    }
    */
};