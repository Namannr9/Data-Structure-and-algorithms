class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) 
    {
        int left=0;
        int right=numbers.size()-1;
        while(left<right)
        {
            int num=numbers[left]+numbers[right];
            if(num == target)
            {
                left++;
                right++;
                return {left,right};
            }
            else if(num < target)
            {
                left++;
            }
            else 
            {
                right--;
            }
    
        }
        return {};
    }
};