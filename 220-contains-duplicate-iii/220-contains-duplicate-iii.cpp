class Solution {
public:
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int k, int t) 
    {
        multiset<long> st;
        if(k==0) return false;
        for(int i=0;i<nums.size();i++)
        {
            if(i>k) st.erase(nums[i-k-1]);
            auto it=st.lower_bound((long)nums[i]-(long)t);
            if(it!=st.end() && *it<=(long)nums[i]+(long)t) return true;
            st.insert(nums[i]);
        }
        return false;
    }
    
    /*
    Time limit exceed
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int k, int t) 
    {
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<=i+k && j<n;j++)
            {
                if(abs(long(nums[i])-long(nums[j]))<=t) return true;
            }
        }
        return false;
    }
    */
};