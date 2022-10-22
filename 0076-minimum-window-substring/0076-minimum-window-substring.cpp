class Solution {
public:
    string minWindow(string s, string t) 
    {
        if(s==t) return s;
        unordered_map<char,int> mp;
        int mn=s.size();
        string ans="";
        for(int i=0;i<t.size();i++) mp[t[i]]++;
        int count=mp.size();
        int i=0;
        
        for(int j=0;j<s.size();j++)
        {
         if(mp.find(s[j])!=mp.end())
         {
             mp[s[j]]--;
             if(mp[s[j]]==0) count--;
         } 
         
         if(count==0)    
         {
             
            
            
          while(count==0) 
          {
             // cout<<"In while loop";
               if(mn>=j-i+1)
              {
                   //cout<<"In if condition";
                ans=s.substr(i,j-i+1);
                mn=j-i+1;
             }
             if(mp.find(s[i])!=mp.end()) 
             {
                 mp[s[i]]++;
                 if(mp[s[i]]==1) count++;
             }
             i++; 
         }
         }
        }
        return ans;
    }
    
};
