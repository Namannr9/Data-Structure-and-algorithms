class Solution {
public:
    vector<int> findAnagrams(string s, string p) 
    {
        int n=p.size();
        if(n>s.size()) return {};
        vector<int> fre(26,0);   // frequecny of target string
        vector<int> window(26,0);   // frequecny of window 
        
        for(int i=0;i<n;i++)
        {
            fre[p[i]-'a']++;
            window[s[i]-'a']++;
        }
        vector<int> ans;
        if(fre==window) ans.push_back(0);
    
        for(int i=n;i<s.size();i++)
        {
            window[s[i]-'a']++;
            window[s[i-n]-'a']--;
            
            if(fre==window) ans.push_back(i-n+1);
        }
        return ans;
    }
   /*
   
   Time limit exceed
   
   vector<int> findAnagrams(string s, string p) 
    {
        sort(p.begin(),p.end());
        
        vector<int> ans;
        int n=p.size();
        string tmp=s.substr(0,n-1);
        //cout<<tmp<<endl;
        int t=0;
        for(int i=n-1;i<s.size();i++)
        {
            tmp+=s[i];
            
            string k=tmp.substr(t,n);
           // cout<<k<<endl;
            sort(k.begin(),k.end());
            if(k==p) ans.push_back(i-n+1);
            t++;
        }
        return ans;
    }
    */
};