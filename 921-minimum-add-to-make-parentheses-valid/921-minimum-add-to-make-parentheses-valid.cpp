class Solution {
public:
    int minAddToMakeValid(string s) 
    {
        int open=0;
        int count=0;
        for(char c: s)
        {
            if(c=='(') open++;
            else
            {
                if(open) open-=1;
                else count++;
            }
        }
        return count+open;
    }
    /*
    int minAddToMakeValid(string s) 
    {
        int sum=0;
        int ans=0;
        for(char c:s)
        {
            if(c=='(') sum++;
            else sum--;
            if(sum<0) 
            {
                ans+=abs(sum);
                sum=0;
            }
        }
        if(sum>0) ans+=sum;
        return ans;
    }
    */
};