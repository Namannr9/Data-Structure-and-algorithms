class Solution {
public:
    int merge(vector<int> &nums,int left,int mid,int right)
    {
        int count=0;
        int j=mid+1;
        int i;
        for(int i=left;i<=mid;i++)
        {
            while(j<=right && nums[i]> 2*(long)nums[j]) j++;
            count+=(j-(mid+1));
        }
        
        j=mid+1;
        vector<int> tmp;
        i=left;
        while((i<=mid) && (j<=right))
        {
         if(nums[i]<nums[j])
         {
             tmp.push_back(nums[i++]);
         }
         else
         {
             tmp.push_back(nums[j++]);
         }
        }
        while(i<=mid) tmp.push_back(nums[i++]);
        while(j<=right) tmp.push_back(nums[j++]);
        for(i=left;i<=right;i++)
        {
           nums[i]=tmp[i-left];
        }
        return count;
    }
    
    int mergeSort(vector<int> &nums,int left,int right)
    {
        if(left>=right) return 0;
        int mid=(right+left)/2;
        int count=0;
        count+=mergeSort(nums,left,mid);
        count+=mergeSort(nums,mid+1,right);
        count+=merge(nums,left,mid,right);
        return count;
    }
    int reversePairs(vector<int>& nums) {
        
        return mergeSort(nums,0,nums.size()-1);
        
    }
};