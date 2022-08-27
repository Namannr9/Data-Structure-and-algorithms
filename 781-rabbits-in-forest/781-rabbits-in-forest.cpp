class Solution {
public:
    int numRabbits(vector<int>& answers) 
    {
        unordered_map<int,int> mp;
        
        for(int a:answers) mp[a]++;
        
        int ans=0;
        
        for(auto ele:mp)
        {
            int x=ele.first;
            int fre=ele.second;
            
            int n=x+1;
            if(fre % n)
            {
                ans+=(fre/n)*n+n;
            }
            else
            {
                ans+=fre;
            }
        }
        return ans;
            
    }
};