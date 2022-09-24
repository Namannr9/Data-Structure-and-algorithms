class Solution {
public:
    int countPrimes(int n) 
    {
        vector<bool> check(n,false);
        
        int ans=0;
        for(int i=2;i<n;i++)
        {
            if(check[i]) continue;
            ans++;
            for(long mul=(long)i*i ;mul<n;mul+=i) check[mul]=true;
        }
        return ans;
        
    }
};