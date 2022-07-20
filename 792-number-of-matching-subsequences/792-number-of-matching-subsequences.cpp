class Solution {
public:
    int solve(string s,string target)
    {
        int i=0;
        int j=0;
        while(i<s.size() && j<target.size())
        {
            if(target[j]==s[i]) j++;
            i++;
        }
        return j==target.size();
    }
    int numMatchingSubseq(string s, vector<string>& words) 
    {
        int ans=0;
        unordered_map<string,int> mp;
        for(string target:words)
        {
            if(mp.find(target)==mp.end()) mp[target]=solve(s,target);    
            
            ans+=mp[target];
                
            
            
        }
        return ans;
    }
};