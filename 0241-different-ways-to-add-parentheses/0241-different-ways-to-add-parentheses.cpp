class Solution {
public:
    vector<int> diffWaysToCompute(string exp) 
    {
        vector<int> ans;
        bool onlyNumber=true;
        for(int i=0;i<exp.size();i++)
        {
            if(!isdigit(exp[i]))
            {
                onlyNumber=false;
                vector<int> left=diffWaysToCompute(exp.substr(0,i));
                vector<int> right=diffWaysToCompute(exp.substr(i+1));
                
                for(int x:left)
                {
                    for(int y:right)
                    {
                        if(exp[i]=='+') ans.push_back(x+y);
                        else if(exp[i]=='-') ans.push_back(x-y);
                        else ans.push_back(x*y);
                    }
                }
            }
        }
        if(onlyNumber) ans.push_back(stoi(exp));
        return ans;
        return ans;
    }
};