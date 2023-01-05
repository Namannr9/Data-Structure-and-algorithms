class Solution {
public:
  
    string oddString(vector<string>& words) 
    {
        unordered_map<string,int> fre;
        unordered_map<string,string> mp;
        for(string s:words)
        {
            string diff="";
            for(int i=1;i<s.size();i++)
            {
                diff+=to_string(s[i]-s[i-1])+"+";
            }
            
            fre[diff]++;
            mp[diff]=s;
        }
        for(auto ele:fre)
        {
            if(ele.second==1) return mp[ele.first];
        }
        return "";
        
       
    }
};