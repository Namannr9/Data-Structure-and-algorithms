class Solution {
public:
    string reverseWords(string s) 
    {
        int i=0;
        int n=s.size();
        string ans="";
        while(i<n)
        {
            if(s[i]==' ') 
            {
                i++;
                continue;
            }
            
            string word="";
            while(i<n && s[i]!=' ')
            {
                word+=s[i];
                i++;
            }
            if(ans.size()) ans=word+" "+ans;
            else ans=word;
            i++;
        }
        return ans;
    }
};