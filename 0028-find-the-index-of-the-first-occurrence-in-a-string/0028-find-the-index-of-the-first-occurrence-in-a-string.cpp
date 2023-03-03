class Solution {
public:
    int strStr(string main, string ser) 
    {
        for(int i=0;i<main.size();i++)
        {
            int j=i;
            int k=0;
            while(k<ser.size())
            {
                if(main[j]!=ser[k]) break;
                j++;
                k++;
            }
            if(k==ser.size()) return i;
        }
        return -1;
    }
};