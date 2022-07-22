class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) 
    {
        vector<int> ans;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        
        int n1=nums1.size();
        int n2=nums2.size();
        int i1=0;
        int i2=0;
        while(i1<n1 && i2<n2)
        {
            if(nums1[i1]==nums2[i2])
            {
                ans.push_back(nums1[i1]);
                i1++;
                i2++;
            }
            else if(nums1[i1]>nums2[i2]) i2++;
            else i1++;
            if(i1>0) while(i1<n1 && nums1[i1]==nums1[i1-1]) i1++;
            if(i2>0) while(i2<n2 && nums2[i2]==nums2[i2-1]) i2++;
        }
        return ans;
    }
    
    /*
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) 
    {
        unordered_set<int> st(nums1.begin(),nums1.end());
        vector<int> ans;
        for(int a:nums2)
        {
            if(st.count(a))
            {
                ans.push_back(a);
                st.erase(a);
            }
        }
        return ans;
    }
    
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
    */
};