class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) 
    {
        unordered_map<char,int> mp;
        unordered_map<char,int> fre;
        for(char c:ransomNote)
        {
            mp[c]++;
        }
        
        for(char c:magazine)
        {
            fre[c]++;
        }
        
        for(auto ele:mp)
        {
            if(fre[ele.first]<ele.second) return false;
        }
        return true;
    }
};