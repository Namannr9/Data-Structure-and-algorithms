class Solution {
public:
    string countAndSay(int n) 
    {
        string ans="1";
        for(int i=1;i<n;i++)
        {
            string tmp="";
            int ss=ans.size();
            int j=0;
            while(j<ss)
            {
                int num=ans[j];
                int count=0;
                while(j<ss && num==ans[j])
                {
                    count++;
                    j++;
                }
                tmp+=to_string(count);
                tmp+=num; // num
                
            }
            ans=tmp;
        }
        
        return ans;
        
    }
};