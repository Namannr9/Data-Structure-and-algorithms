class Solution {
public:
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