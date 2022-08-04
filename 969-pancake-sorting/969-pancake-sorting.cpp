class Solution {
public:
    void flip(vector<int> &nums,int l,int r)
    {
        while(l<r) swap(nums[l++],nums[r--]);
    }
    vector<int> pancakeSort(vector<int>& nums) 
    {
        vector<int> ans;
        int start=0;
        int end=nums.size()-1;
        while(start<end)
        {
            int maxVal=0;
            int maxIndex=0;
            for(int i=start;i<=end;i++)
            {
                if(maxVal<nums[i])
                {
                    maxVal=nums[i];
                    maxIndex=i;
                }
            }
            
            ans.push_back(maxIndex+1);
            flip(nums,start,maxIndex);
            ans.push_back(end+1);
            flip(nums,start,end);
            end--;
        }
        return ans;
    }
};