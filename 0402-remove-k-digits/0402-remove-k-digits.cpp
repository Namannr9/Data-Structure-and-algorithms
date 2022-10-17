class Solution {
public:
    string removeKdigits(string nums, int k) 
    {
        if(nums.size()==k) return "0";
        stack<char> stk;
        stk.push(nums[0]);
        
        for(int i=1;i<nums.size();i++)
        {
            while(stk.size() && k>0 && nums[i]<stk.top())
            {
                k--;
                stk.pop();
            }
            
            stk.push(nums[i]);
            
            if(stk.size()==1 && nums[i]=='0') stk.pop();
            
        }
        
        while(k && stk.size())
        {
            k--;
            stk.pop();
        }
        
        string ans="";
        while(stk.size())
        {
            ans+=stk.top();
            stk.pop();
        }
        
        reverse(ans.begin(),ans.end());
        
        return ans.size()==0 ? "0" : ans;
        
    }
};