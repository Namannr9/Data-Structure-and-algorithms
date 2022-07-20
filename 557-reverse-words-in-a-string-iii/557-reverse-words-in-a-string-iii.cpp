class Solution {
public:
    void reverse(string &s,int left,int right)
    {
        while(left<right)
        {
            swap(s[left++],s[right--]);
        }
    }
    string reverseWords(string s) 
    {
        int st=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==' ')
            {
                reverse(s,st,i-1);
                st=i+1;
            }
        }
        reverse(s,st,s.size()-1);
        return s;
    }
};