class Solution {
public:
     bool isIsomorphic(string s, string t) 
     {
        int n=s.size();
        int m=t.size();
        if(n!=m) return false;
         
         int m1[256]={0};
         int m2[256]={0};
         for(int i=0;i<n;i++)
         {
             if(m1[s[i]]==0 && m2[t[i]]==0)  // first time visit
             {
                 m1[s[i]]=t[i];
                 m2[t[i]]=s[i];
             }
             else if(m1[s[i]]!=t[i]) return false;
         }
         return true;
         
         
     }
    /*
    // convert both strig to its normal form
    string general(string s)
    {
        unordered_map<char,int> mp;
        int c=1;
        string ans;
        for(int i=0;i<s.size();i++)
        {
            if(mp.find(s[i])==mp.end())
            {
                mp[s[i]]=c++;
            }
            ans.append(to_string(mp[s[i]]));
        }
        return ans;
    }
    bool isIsomorphic(string s, string t) 
    {
        s=general(s);    
        t=general(t);
        return s==t;
    }
    */
};