class Solution {
public:
    int minMutation(string start, string end, vector<string>& bank) 
    {
        unordered_set<string> st;
        queue<string> q;
        
        for(string s:bank) st.insert(s);
        q.push(start);
        
        int level=0;
        string gene="ACGT";
        while(q.size())
        {
            
            int sz=q.size();
            for(int t=0;t<sz;t++)
            {
                string cur=q.front();
                q.pop();
                st.erase(cur);
                if(cur==end) return level;
            
                for(int j=0;j<cur.size();j++)
                {
                    string tmp=cur;
                    for(int i=0;i<gene.size();i++)
                    {
                        tmp[j]=gene[i];     // change one character
                
                        if(st.find(tmp)!=st.end())
                        {
                            q.push(tmp);
                        }
                    }
                    
                }
                
                
            }
            
            level++;
        }
        
    return -1;
    }
};