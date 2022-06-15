class Solution {
public:
    static bool cmp(string &l,string &r)
    {
        return l.size()<r.size();
    }
    int longestStrChain(vector<string>& words) 
    {
        map<string,int> mp;
        sort(words.begin(),words.end(),cmp);
        int n=words.size();
        int ans=1;
        for(string word : words)
        {
            mp[word]=1;
            for(int i=0;i<word.size();i++)
            {
                string tmp=word.substr(0,i)+word.substr(i+1);
                if(mp.find(tmp)!=mp.end())
                {
                    mp[word]=mp[tmp]+1;
                    ans=max(mp[word],ans);
                }
            }
        }
        return ans;
    }
};