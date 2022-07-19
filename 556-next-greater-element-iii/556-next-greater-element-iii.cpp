class Solution {
public:
    int nextGreaterElement(int n) 
    {
        vector<int> nums;
        while(n>0)
        {
            nums.push_back(n%10);
            n=n/10;
        }
        reverse(nums.begin(),nums.end());
        
        int l;
        int r;
        n=nums.size();
        for(l=n-2;l>=0;l--)
        {
            if(nums[l]<nums[l+1]) break;
        }
        //cout<<l<<endl;
        if(l==-1) return -1;
        
        for(r=n-1;r>l;r--)
        {
            if(nums[r]>nums[l]) break;
        }
        swap(nums[r],nums[l]);
        reverse(nums.begin()+l+1,nums.end());
        
        long long int nn=0;
        for(int i=0;i<nums.size();i++)
        {            
            nn*=10;
            if(nn+nums[i]>INT_MAX)
                return -1;
            nn+=nums[i];
        }
        return nn;
    }
};