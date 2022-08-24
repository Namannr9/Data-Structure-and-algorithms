class Solution {
public:
    bool isPowerOfFour(int n) 
    {
        if(n==0) return false;
        if(n==1) return true;
        return n%4==0 && isPowerOfFour(n/4);
    }
    /*
    bool isPowerOfFour(int n) 
    {
        if(n==0) return false;
        while(n!=1)
        {
            if(n%4) return false;
            n=n/4;
        }
        return true;
    }
    */
};