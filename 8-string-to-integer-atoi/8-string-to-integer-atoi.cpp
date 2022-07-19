class Solution {
public:
    int myAtoi(string s) 
    {
        int sign=1;
        long ans=0;
        int i=0;
        while(isspace(s[i])) i++;
        
        if(s[i]=='-')
        {
            sign=-1;
            i++;
        }
        else if(s[i]=='+') i++;
        
        while(isdigit(s[i]))
        {
            ans=ans*10;
            ans+=long(s[i]-'0');
            if(ans>INT_MAX)
            {
                return (sign==1) ? INT_MAX : INT_MIN;
            }
            i++;
        }
        return (int)(sign*ans);
        
    }
};