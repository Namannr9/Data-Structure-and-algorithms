class Solution {
public:
    void mapToRow(unordered_map<char,int> &mp,vector<string> v)
    {
        for(int i=0;i<v.size();i++)
        {
            
            string tmp=v[i];
            //cout<<i<<endl;
            for(char c:tmp) mp[c]=i;
            
        }
    }
    vector<string> findWords(vector<string>& words) 
    {
        unordered_map<char,int> mp;
        
        vector<string> v={"qwertyuiop","asdfghjkl","zxcvbnm"};
        
        mapToRow(mp,v);
        vector<string> ans;
        for(string s:words)
        {
            bool full=true;
            for(int i=1;i<s.size();i++)
            {
                int rowIndex=mp[tolower(s[0])];
                
                if(mp[tolower(s[i])]!=rowIndex)
                {
                    
                    full=false;
                    break;
                }
            }
            if(full) ans.push_back(s);
        }
        
        return ans;
    }
};