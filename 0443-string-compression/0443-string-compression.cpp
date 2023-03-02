class Solution {
public:
    int compress(vector<char>& s) 
    {
        int i=0;
        int j=0;
        int k=0;
        int n=s.size();
        while(j<n)
        {
            j=i;
            while(j<n && s[i]==s[j]) j++;
            int count=j-i;
            s[k++]=s[i];
            
            if(count>1)
            {
                string num=to_string(count);
                for(char c : num) s[k++]=c;
            }
            i=j;
        }
        return k;
    }
};