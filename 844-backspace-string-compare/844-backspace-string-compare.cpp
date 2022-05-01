class Solution {
public:
    bool backspaceCompare(string s, string t) 
    {
        int k=0;
        int i=0;
        int j=0;
        int sLen=s.size();
        int tLen=t.size();
        
        
        while(k<s.size())
        {
                if(s[k]!='#')
                {
                    s[i]=s[k];
                    i++;
                }
                else if(i>0) i--;            
        k++;
        }
        
        k=0;
        while(k<t.size())
        {
               if(t[k]!='#')
                {
                    t[j]=t[k];
                    j++;
                }
                else if(j>0)
                {
                    j--;
                }
            k++;
        }
           
        cout<<s<<endl;
        cout<<t<<endl;
        
        if(i!=j) return false;
        for(k=0;k<i;k++)
        {
            if(s[k]!=t[k]) return false;
        }
        return true;
    }
};