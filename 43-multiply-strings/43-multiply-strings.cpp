class Solution {
public:
    string multiply(string num1, string num2) 
    {
        if(num1=="0" || num2=="0") return "0";
        
        vector<int> nums(num1.size()+num2.size(),0);
        
        for(int i=num1.size()-1;i>=0;i--)
        {
            for(int j=num2.size()-1;j>=0;j--)
            {
                nums[i+j+1]+=(num1[i]-'0')*(num2[j]-'0');
                nums[i+j]+=nums[i+j+1]/10;   // carry part
                nums[i+j+1]=nums[i+j+1]%10;
            }
        }
        
        int i=0;
        while(i<nums.size() && nums[i]==0) i++;
        
        string res="";
        while(i<nums.size()) res.push_back(nums[i++]+'0');
        return res;
    }
};