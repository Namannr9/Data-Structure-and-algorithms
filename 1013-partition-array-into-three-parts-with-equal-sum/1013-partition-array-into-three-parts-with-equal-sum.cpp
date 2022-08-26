class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) 
    {
        int total=0;
        for(auto num : arr) total+=num;
        if(total%3) return false;
        int ans=0;
        int sum=0;
        for(int i=0;i<arr.size();i++)
        {
            sum+=arr[i];
            if(sum==total/3)
            {
                ans++;
                sum=0;
            }
        }
        return ans>=3;
        
    }
};