class Solution {
public:
    bool checkPowersOfThree(int n) 
    {
        while(n>=3)
        {
            if(n%3) n=n-1;
            if(n%3==0) n=n/3;
            else return false;
        }
       // cout<<n<<endl;
        return n==1 ? true : false;
    }
};