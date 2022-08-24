class Solution {
public:
    void sortColors(vector<int>& nums) 
    {
        int l=0;
        int mid=0;
        int r=nums.size()-1;
        while(mid<=r)
        {
            switch(nums[mid])
            {
                case 0:
                    swap(nums[l++],nums[mid++]);
                    break;
                case 1:
                    mid++;
                    break;
                case 2:
                    swap(nums[mid],nums[r--]);
                    break;
            }
        }
    }
    /*
    void sortColors(vector<int>& nums) 
    {
        int cnt[3]={0,0,0};
        for(int i:nums)
        {
            cnt[i]++;
        }
        int j=0;
        for(int i=0;i<3;i++)
        {
            while(cnt[i]--)
            {
                nums[j++]=i;
            }
        }
    }
    */
};