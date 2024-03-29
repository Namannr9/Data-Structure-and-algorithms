class Solution {
public:
    bool isPowerOfTwo(int n) 
    {
        if(n==0) return false;
        if(n==1) return true;
        return n%2==0 && isPowerOfTwo(n/2);
    }
    /*
    bool isPowerOfTwo(int n) 
    {
        if(n==0) return false;
        while(n!=1)
        {
            if(n%2) return false;
            n=n/2;
        }
        return true;
    }
    */
};