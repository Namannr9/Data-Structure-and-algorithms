class Solution {
public:
    bool checkInclusion(string a, string b) 
    {
        if(a.size()>b.size()) return false;
        
        vector<int> fre(26,0);
        vector<int> window(26,0);
        
        int n=a.size();
        for(int i=0;i<n;i++)
        {
            fre[a[i]-'a']++;
            window[b[i]-'a']++;
        }
        
        if(fre==window) return true;
        
        for(int i=n;i<b.size();i++)
        {
            window[b[i]-'a']++;
            window[b[i-n]-'a']--;
            
            if(fre==window) return true;
        }
        return false;
    
    }
};