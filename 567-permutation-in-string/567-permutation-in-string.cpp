class Solution {
public:
    bool checkInclusion(string s1, string s2) 
    {
        int n=s1.size();
        if(n>s2.size()) return false;
        
        vector<int> fre(26,0);
        vector<int> window(26,0);
        
        for(int i=0;i<n;i++)
        {
            fre[s1[i]-'a']++;
            window[s2[i]-'a']++;
        }
        if(fre==window) return true;
        for(int i=n;i<s2.size();i++)
        {
            window[s2[i]-'a']++;
            window[s2[i-n]-'a']--;
            
            if(fre==window) return true;
        }
        return false;
    }
};