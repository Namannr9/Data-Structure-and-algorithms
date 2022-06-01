class Solution {
public:
    void reverse(vector<int> &nums,int s,int e)
    {
        int tmp;
        while(s<e)
        {
            tmp=nums[s];
            nums[s]=nums[e];
            nums[e]=tmp;
            s++;
            e--;
        }
    }
    void rotate(vector<int>& nums, int k) 
    {
        int len=nums.size();
        k=k%len;
        reverse(nums,0,len-k-1);
        reverse(nums,len-k,len-1);
        reverse(nums,0,len-1);
        
    }
    
    
    /*
    brute force
     while(k--)
        {
            int n=nums.size();
            int tmp=nums[n-1];
            for(int i=n-2;i>=0;i--)
            {
                nums[i+1]=nums[i];
            }
            nums[0]=tmp;
        }
    */
};
