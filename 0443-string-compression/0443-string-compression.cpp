class Solution {
public:
    int compress(vector<char>& s) 
    {
        int k=0;
        int i=0;
        int n=s.size();
        int j;
        while(i<n)
        {
            j=i;
            while(j<n && s[i]==s[j]) j++;
            int count=j-i;
            s[k++]=s[i];
            
            if(count>1)
            {
                string tmp=to_string(count);
                for(char c:tmp) s[k++]=c;
            }
            i=j;
        }
        return k;
    }
};