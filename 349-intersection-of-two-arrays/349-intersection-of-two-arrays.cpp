class Solution {
public:
    vector<int> intersection(vector<int>& a, vector<int>& b) 
    {
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        int i=0;
        int j=0;
        vector<int> ans;
        while(i<a.size() && j<b.size())
        {
            if(a[i]==b[j])
            {
                ans.push_back(a[i]);
                i++;
                j++;
            }
            else if(a[i]<b[j]) i++;
            else j++;
            
            if(i>0) while(i<a.size() && a[i]==a[i-1]) i++;
            if(j>0) while(j<b.size() && b[j]==b[j-1]) j++;
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