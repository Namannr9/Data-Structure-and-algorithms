class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) 
    {
        unordered_map<string,int> fre;
        vector<int> ans;
        for(string s:words) fre[s]++;
        
        int len=words[0].size();
        int word=words.size();
        
        int n=s.size();
        
        for(int i=0;i<n-(len*word)+1;i++)
        {
            unordered_map<string,int> tmp;
            for(int j=i;j<i+(word*len);j+=len)
            {
                string str=s.substr(j,len);
                tmp[str]++;
            }
            int flag=1;
            for(auto ele:fre)
            {
                if(fre[ele.first]!=tmp[ele.first]) 
                {
                    flag=0;
                    break;
                }
            }
            if(flag) ans.push_back(i);
        }
        return ans;
        
    }
};