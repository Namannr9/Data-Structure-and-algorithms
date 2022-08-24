class Solution {
public:
    bool solve(int n,int p)
    {
        if(n==0) return true;
        if(p>n) return false;
        
        return solve(n,p*3) || solve(n-p,p*3);
    }
    bool checkPowersOfThree(int n) 
    {
        int p=1;
        return solve(n,p);    
    }
};