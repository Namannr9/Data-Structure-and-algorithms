class Solution {
public:
    string findLongestWord(string s, vector<string>& dict) 
    {
        string ans="";
        
        int n=dict.size();
        
        for(int i=0;i<n;i++)
        {
            string cur=dict[i];
            int j=0;
            int k=0;
            while(j<cur.size() && k<s.size())
            {
                if(s[k]==cur[j])
                {
                    k++;
                    j++;
                }
                else k++;
            }
            if(j==cur.size())
            {
                if(cur.size()>ans.size()) ans=cur;
                else if(cur.size()==ans.size() && ans>cur) ans=cur;
            }
            
                
            
        }
        return ans;
    }
};