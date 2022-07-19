class Solution {
public:
    string addStrings(string num1, string num2) 
    {
        int i=num1.size()-1;
        int j=num2.size()-1;
        int carry=0;
        int sum=0;
        string ans="";
        while(i>=0 || j>=0)
        {
            sum=carry;
            int x=(i>=0) ? num1[i--]-'0' : 0;
            int y=(j>=0) ? num2[j--]-'0' : 0;
            sum+=x+y;
            ans=char(sum%10+'0')+ans;
            carry=sum/10;
        }
        
        if(carry) ans=char(carry+'0')+ans;
        return ans;
            
        
           
    }
};