class Solution {
public:
     
    
    int longestPalindrome(vector<string>& words) 
    {
        unordered_map<string,int> mp;
        for(string s:words) 
        {
            mp[s]++;
        }
        int ans=0;
        bool flag=false;
        int c=0;
        for(auto &ele : mp)
        {
            
            string s=ele.first;
           
            string tmp="";
            tmp+=s[1];
            tmp+=s[0];
            
            if(tmp==s) // same letter aa bb cc
            {
                //cout<<tmp<<endl;
                if(!flag && ele.second%2)  // consider only for first time
                {
                    ans+=2;
                    flag=true;
                }
                ans+=(ele.second/2)*4;
                //cout<<ans<<endl;
            }
            else if(mp.find(tmp)!=mp.end())
            {
                ans+=min(mp[s],mp[tmp])*4;
                mp[s]=0;
                mp[tmp]=0;
            }
            
        }
        return ans;
    }
    
};