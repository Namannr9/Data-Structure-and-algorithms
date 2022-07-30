class Solution {
public:
    char findTheDifference(string s, string t) 
    {
        int c=0;
        for(char ch:t) c=c^ch;
        for(char ch:s) c=c^ch;
        return c;
    }
    /*
    char findTheDifference(string s, string t) 
    {
        unordered_map<char,int> mp;
        for(char c:t) mp[c]++;
        for(char c:s) mp[c]--;
        for(auto ele:mp) if(ele.second==1) return ele.first;
        return ' ';
    }
    */
};