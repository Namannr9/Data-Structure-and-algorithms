class Solution {
public:
    
    /*
    just reverse half number to check its palindome or not 
    even case:
        1 2 2 1
        x = 1 2
        rev = 1 2
        
    odd case :
         1 2 3 2 1
        x = 1 2
        rev = 1 2 3 make it 1 2 by rev/10;
        
    */
    bool isPalindrome(int x) 
    {
        if(x<0 || (x!=0 && x%10==0)) return false;
        int rev=0;
        while(x>rev)
        {
            rev=rev*10+x%10;
            x=x/10;
        }
        
        return (x==rev) || (x==rev/10);
        
    
    }
};