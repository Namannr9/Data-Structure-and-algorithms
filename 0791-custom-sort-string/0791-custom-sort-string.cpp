class Solution {
public:
    string customSortString(string order, string s) 
    {
        map<char,int> mp;
        
        for(char c:s) mp[c]++;
        
        string ans="";
        
        for(char c:order)
        {
            if(mp.find(c)!=mp.end())
            {
                string s(mp[c],c);
                ans+=s;
                mp.erase(c);
            }
        }
        
        for(auto ele:mp)
        {
            string s(ele.second,ele.first);
            ans+=s;
        }
        return ans;
        
        
    }
};