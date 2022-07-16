class Solution {
public:
    bool search(vector<int> &nums,int target)
    {
        int left=0;
        int right=nums.size()-1;
        while(left<=right)
        {
            int mid=(right+left)/2;
            if(nums[mid]==target) return true;
            else if(nums[mid]<target) left=mid+1;
            else right=mid-1;
        }
        return false;
    }
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) 
    {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        vector<int> ans;
        int n=nums1.size();
        int pre=-1;
        for(int i=0;i<n;i++)
        {
            if(nums1[i]!=pre)
            {
                //cout<<search(nums2,nums1[i]);
                if(search(nums2,nums1[i])) ans.push_back(nums1[i]);
            }
            pre=nums1[i];
        }
        return ans;
    }
};