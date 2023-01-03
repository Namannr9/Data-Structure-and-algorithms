class Solution {
public:
    int minDeletionSize(vector<string>& st) 
    {
        int r=st.size();
        if(r==1) return 0;
        int c=st[0].size();
        int count=0;
        for(int i=0;i<c;i++)
        {
            for(int j=1;j<r;j++)
            {
                if(st[j-1][i]-st[j][i]>0)
                {
                    count++;
                    break;
                }
            }
        }
        return count;
    }
};