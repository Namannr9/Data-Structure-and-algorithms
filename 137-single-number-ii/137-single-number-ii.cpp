class Solution {
public:
    int singleNumber(vector<int>& nums) 
    {
        int ans=0;
        for(int i=0;i<32;i++)
        {
            int sum=0;
            for(int j=0;j<nums.size();j++)
            {
                if((nums[j]>>i) & 1) sum++;
            }
            sum=sum%3;
            
            if(sum) // not equal to zero  it means extra one
            {
                ans=ans | sum<<i;
            }
        }
        return ans;
    }
};    
    /*
    int singleNumber(vector<int>& nums) 
    {
        unordered_map<int,int> mp;
        for(int a:nums) mp[a]++;
        for(auto ele :mp) if(mp[ele.first]==1) return ele.first;
        return -1;
    }

*/