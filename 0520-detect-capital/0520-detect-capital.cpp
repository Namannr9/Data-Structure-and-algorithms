class Solution {
public:
    bool detectCapitalUse(string word) 
    {
        int cap=0;
        for(char c:word) if(c>=65 && c<=90) cap++;
        cout<<cap<<endl;
        if(cap==0 || cap==word.size()) return true;
        if(cap==1 && word[0]>=65 && word[0]<=90) return true;
        return false;
    }
};