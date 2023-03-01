class Solution {
public:
    void merge(vector<int> &nums,int left,int mid,int right)
    {
        int i=left;
        int j=mid+1;
        int k=0;
        int *tmp=new int[right-left+1];
        while(i<=mid && j<=right)
        {
            if(nums[i]<=nums[j]) tmp[k++]=nums[i++];
            else tmp[k++]=nums[j++];
        }
        while(i<=mid) tmp[k++]=nums[i++];
        while(j<=right) tmp[k++]=nums[j++];
        
        for(int a=0;a<=right-left;a++)
        {
            nums[left+a]=tmp[a];
        }
        
    }
    void mergeSort(vector<int> & nums,int left,int right)
    {
        if(left<right)
        {
            int mid=(left+right)/2;
            mergeSort(nums,left,mid);
            mergeSort(nums,mid+1,right);
            merge(nums,left,mid,right);
        }
    }
    vector<int> sortArray(vector<int>& nums) 
    {
        int left=0;
        int right=nums.size()-1;
        mergeSort(nums,left,right);
        return nums;
    }
};