class Solution {
public:
    int maximumSwap(int tmp) 
    {
        string num=to_string(tmp);
        int n=num.size();
        int k;
        for(int i=0;i<n;i++)
        {
            char mx=num[i];
            for(int j=i+1;j<n;j++)
            {
                if(num[j]>=mx)
                {
                    mx=num[j];
                    k=j;
                }
            }
            if(mx!=num[i])
            {
                swap(num[i],num[k]);
                return stoi(num);
            }
        }
        return tmp;
    }
};