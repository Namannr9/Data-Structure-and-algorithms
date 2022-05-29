class Solution {
public:
    int maxProduct(vector<string>& words) 
    {
        int n=words.size();
        vector<int> check(n);
        for(int i=0;i<n;i++)
        {
            int num=0;
            for(char c:words[i])
            {
                num=num | 1<<(c-'a');
            }
            check[i]=num;
        }
        int ans=0;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(!(check[i] & check[j]))
                {
                    int len=words[i].size()*words[j].size();
                    ans=max(ans,len);
                }
            }
        }
    
    return ans;

    }
};