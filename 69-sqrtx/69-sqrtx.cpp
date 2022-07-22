class Solution {
public:
    int mySqrt(int x) 
    {
        if(x<=1) return x;
        int left=0;
        int right=x-1;
        long long mid;
        int ans;
        while(left<=right)
        {
            mid=(left+right)/2;
            if(mid*mid==x) return mid;
            else if(mid*mid>x) right=mid-1;
            else
            {
                left=mid+1;
                ans=mid;
            }
        }
        return ans;
        
            
    }
};