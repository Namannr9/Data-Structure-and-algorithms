class Solution {
public:
    int getSum(int a, int b) 
    {
        while(b>0)
        {
            a++;
            b--;
        }
        while(b<0)  // handle negative case
        {
            a--;
            b++;
        }
        
        
        return a;
    }
};