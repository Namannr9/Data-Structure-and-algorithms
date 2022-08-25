class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) 
    {
        unordered_map<char,int> fre;
        
        for(char c:magazine)
        {
            fre[c]++;
        }
        
        for(char c:ransomNote)
        {
            if(fre[c]>0) fre[c]--;
            else return false;
        }
        return true;
    }
};