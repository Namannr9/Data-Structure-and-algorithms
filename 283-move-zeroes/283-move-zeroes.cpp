class Solution {
public:
    void moveZeroes(vector<int>& nums) 
    {
        int n=nums.size();
        int j=0;
        int tmp;
        for(int i=0;i<n;i++)
        {
            if(nums[i]!=0)
            {
                tmp=nums[i];
                nums[i]=nums[j];
                nums[j]=tmp;
                j++;
            }
        }
    }
    
    
    /*
    int n=nums.size();
        int j=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]!=0) nums[j++]=nums[i];
        }
        for(int i=j;i<n;i++)
        {
            nums[i]=0;
        }
        
    */
};