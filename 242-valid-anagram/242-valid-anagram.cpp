class Solution {
public:
    // hashing
    bool isAnagram(string s, string t) 
    {
        if(s.size()!=t.size()) return false;
        unordered_map<char,int> count;
        for(int i=0;i<s.size();i++)
        {
            count[s[i]]++;
            count[t[i]]--;
        }
        
        for(auto ele : count)
        {
            if(ele.second) return false;
        }
        return true;
        
    }
    
    /*
    sorting
    bool isAnagram(string s, string t) 
    {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        if(s==t) return true;
        else return false;
            
    }
    */
};